// Copyright 2018-2019 Michal Cieciura. All Rights Reserved.

#include "PointCloudImportUI.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IMainFrameModule.h"
#include "HAL/PlatformApplicationMisc.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SUniformGridPanel.h"
#include "Widgets/Input/SButton.h"
#include "EditorStyleSet.h"
#include "PointCloudHelper.h"
#include "PointCloudFileImporter.h"

#define LOCTEXT_NAMESPACE "PointCloudImportUI"

/////////////////////////////////////////////////
// SPointCloudOptionWindow

void SPointCloudOptionWindow::Construct(const FArguments& InArgs)
{
	bool bIsReimport = InArgs._IsReimport;

	ImportUI = InArgs._ImportUI;
	WidgetWindow = InArgs._WidgetWindow;

	check (ImportUI.IsValid());
	
	ImportAllButton = SNew(SButton)
					.HAlign(HAlign_Center)
					.Text(LOCTEXT("PointCloudOptionWindow_ImportAll", "Import All"))
					.ToolTipText(LOCTEXT("PointCloudOptionWindow_ImportAll_ToolTip", "Import all files with these same settings"))
					.IsEnabled(this, &SPointCloudOptionWindow::CanImport)
					.OnClicked(this, &SPointCloudOptionWindow::OnImportAll);

	ImportButton = SNew(SButton)
					.HAlign(HAlign_Center)
					.Text(bIsReimport ? LOCTEXT("PointCloudOptionWindow_Import", "Reimport") : LOCTEXT("PointCloudOptionWindow_Import", "Import"))
					.IsEnabled(this, &SPointCloudOptionWindow::CanImport)
					.OnClicked(this, &SPointCloudOptionWindow::OnImport);

	CancelButton = SNew(SButton)
					.HAlign(HAlign_Center)
					.Text(LOCTEXT("PointCloudOptionWindow_Cancel", "Cancel"))
					.ToolTipText(LOCTEXT("PointCloudOptionWindow_Cancel_ToolTip", "Cancels importing this Point Cloud file"))
					.OnClicked(this, &SPointCloudOptionWindow::OnCancel);						

	TSharedPtr<SHorizontalBox> HeaderButtons;
	TSharedPtr<SBox> InspectorBox;
	this->ChildSlot
	[
		SNew(SBox)
		.MaxDesiredHeight(InArgs._MaxWindowHeight)
		.MaxDesiredWidth(InArgs._MaxWindowWidth)
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.AutoHeight()
			.Padding(2)
			[
				SNew(SBorder)
				.Padding(FMargin(3))
				.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
				[
					SNew(SHorizontalBox)
					+SHorizontalBox::Slot()
					.AutoWidth()
					[
						SNew(STextBlock)
						.Font(FEditorStyle::GetFontStyle("CurveEd.LabelFont"))
						.Text(LOCTEXT("Import_CurrentFileTitle", "Current File: "))
					]
					+SHorizontalBox::Slot()
					.Padding(5, 0, 0, 0)
					.AutoWidth()
					.VAlign(VAlign_Center)
					[
						SNew(STextBlock)
						.Font(FEditorStyle::GetFontStyle("CurveEd.InfoFont"))
						.Text(InArgs._FullPath)
					]
				]
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(2)
			[
				SAssignNew(InspectorBox, SBox)
				.MaxDesiredHeight(750.0f)
				.WidthOverride(425.0f)
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.HAlign(HAlign_Right)
			.Padding(2)
			[
				bIsReimport ?
				(
					SNew(SUniformGridPanel)
					.SlotPadding(2)
					+ SUniformGridPanel::Slot(0, 0)
					[
						ImportButton->AsShared()
					]
					+ SUniformGridPanel::Slot(1, 0)
					[
						CancelButton->AsShared()
					]
				)
				:
				(
					SNew(SUniformGridPanel)
					.SlotPadding(2)
					+ SUniformGridPanel::Slot(0, 0)
					[
						ImportAllButton->AsShared()
					]
					+ SUniformGridPanel::Slot(1, 0)
					[
						ImportButton->AsShared()
					]
					+ SUniformGridPanel::Slot(2, 0)
					[
						CancelButton->AsShared()
					]
				)
			]
		]
	];

	// Apply customized widget
	TSharedPtr<SWidget> SettingsWidget = ImportUI.Get()->GetWidget();
	if (SettingsWidget.IsValid())
	{
		InspectorBox->SetContent(SettingsWidget.ToSharedRef());
	}
}

/////////////////////////////////////////////////
// FPointCloudImportUI

TSharedPtr<FPointCloudImportSettings> FPointCloudImportUI::ShowImportDialog(const FString& Filename, bool bIsReimport)
{
	TSharedPtr<FPointCloudImportSettings> ImportUI = UPointCloudFileImporter::GetImportSettingsForType(Filename);

	if (!ShowImportDialog(ImportUI, bIsReimport))
	{
		ImportUI = NULL;
	}

	return ImportUI;
}

bool FPointCloudImportUI::ShowImportDialog(TSharedPtr<FPointCloudImportSettings> ImportSettings, bool bIsReimport)
{
	TSharedPtr<SWindow> ParentWindow;

	if (FModuleManager::Get().IsModuleLoaded("MainFrame"))
	{
		IMainFrameModule& MainFrame = FModuleManager::LoadModuleChecked<IMainFrameModule>("MainFrame");
		ParentWindow = MainFrame.GetParentWindow();
	}

	const float ImportWindowWidth = 450.0f;
	const float ImportWindowHeight = 750.0f;
	FVector2D ImportWindowSize = FVector2D(ImportWindowWidth, ImportWindowHeight); // Max window size it can get based on current slate

	FSlateRect WorkAreaRect = FSlateApplicationBase::Get().GetPreferredWorkArea();
	FVector2D DisplayTopLeft(WorkAreaRect.Left, WorkAreaRect.Top);
	FVector2D DisplaySize(WorkAreaRect.Right - WorkAreaRect.Left, WorkAreaRect.Bottom - WorkAreaRect.Top);

	float ScaleFactor = FPlatformApplicationMisc::GetDPIScaleFactorAtPoint(DisplayTopLeft.X, DisplayTopLeft.Y);
	ImportWindowSize *= ScaleFactor;

	FVector2D WindowPosition = (DisplayTopLeft + (DisplaySize - ImportWindowSize) / 2.0f) / ScaleFactor;

	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(NSLOCTEXT("UnrealEd", "PointCloudImportOpionsTitle", "Point Cloud Import Options"))
		.SizingRule(ESizingRule::Autosized)
		.AutoCenter(EAutoCenter::None)
		.ClientSize(ImportWindowSize)
		.ScreenPosition(WindowPosition);
	
	TSharedPtr<SPointCloudOptionWindow> PointCloudOptionWindow;
	Window->SetContent
	(
		SAssignNew(PointCloudOptionWindow, SPointCloudOptionWindow)
		.ImportUI(ImportSettings)
		.WidgetWindow(Window)
		.FullPath(FText::FromString(ImportSettings->Filename.Len() > 58 ? ("..." + ImportSettings->Filename.Right(55)) : ImportSettings->Filename))
		.IsReimport(bIsReimport)
		.MaxWindowHeight(ImportWindowHeight)
		.MaxWindowWidth(ImportWindowWidth)
	);

	// @todo: we can make this slow as showing progress bar later
	FSlateApplication::Get().AddModalWindow(Window, ParentWindow, false);

	ImportSettings->bImportAll = PointCloudOptionWindow->ShouldImportAll();

	return !PointCloudOptionWindow->bCancelled;
}

#undef LOCTEXT_NAMESPACE