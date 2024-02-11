//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvToolBar"
#pragma link "AdvMenus"
#pragma link "AdvToolBarStylers"
#pragma link "AdvGrid"
#pragma link "AdvObj"
#pragma link "BaseGrid"
#pragma link "AdvGlowButton"
#pragma link "AdvSmoothDock"
#pragma link "INIInspectorBar"
#pragma link "InspectorBar"
#pragma link "AdvOfficeComboBox"
#pragma link "RTTIInspectorBar"
#pragma link "AdvPanel"
#pragma link "ToolPanels"
#pragma link "AdvSmoothExpanderButtonPanel"
#pragma link "AdvSmoothExpanderPanel"
#pragma link "AdvSmoothPanel"
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
	InitProgram();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::InitProgram() {

	PrintMsg(L"Init Complete");
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::PrintMsg(UnicodeString _str) {
	memo->Lines->Add(_str);
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::btn_TestClick(TObject *Sender)
{
	//advdockpn->
    DockPanel_Top->ToolBarStyler;
}
//---------------------------------------------------------------------------
