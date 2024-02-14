//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DevForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxPC"
#pragma link "dxDockControl"
#pragma link "dxDockPanel"
#pragma link "cxClasses"
#pragma link "dxSkinBlack"
#pragma link "dxSkinBlue"
#pragma link "dxSkinBlueprint"
#pragma link "dxSkinCaramel"
#pragma link "dxSkinCoffee"
#pragma link "dxSkinDarkRoom"
#pragma link "dxSkinDarkSide"
#pragma link "dxSkinDevExpressDarkStyle"
#pragma link "dxSkinDevExpressStyle"
#pragma link "dxSkinFoggy"
#pragma link "dxSkinGlassOceans"
#pragma link "dxSkinHighContrast"
#pragma link "dxSkiniMaginary"
#pragma link "dxSkinLilian"
#pragma link "dxSkinLiquidSky"
#pragma link "dxSkinLondonLiquidSky"
#pragma link "dxSkinMcSkin"
#pragma link "dxSkinMetropolis"
#pragma link "dxSkinMetropolisDark"
#pragma link "dxSkinMoneyTwins"
#pragma link "dxSkinOffice2007Black"
#pragma link "dxSkinOffice2007Blue"
#pragma link "dxSkinOffice2007Green"
#pragma link "dxSkinOffice2007Pink"
#pragma link "dxSkinOffice2007Silver"
#pragma link "dxSkinOffice2010Black"
#pragma link "dxSkinOffice2010Blue"
#pragma link "dxSkinOffice2010Silver"
#pragma link "dxSkinOffice2013DarkGray"
#pragma link "dxSkinOffice2013LightGray"
#pragma link "dxSkinOffice2013White"
#pragma link "dxSkinPumpkin"
#pragma link "dxSkinsCore"
#pragma link "dxSkinsDefaultPainters"
#pragma link "dxSkinsdxDockControlPainter"
#pragma link "dxSkinSeven"
#pragma link "dxSkinSevenClassic"
#pragma link "dxSkinSharp"
#pragma link "dxSkinSharpPlus"
#pragma link "dxSkinSilver"
#pragma link "dxSkinSpringTime"
#pragma link "dxSkinStardust"
#pragma link "dxSkinSummer2008"
#pragma link "dxSkinTheAsphaltWorld"
#pragma link "dxSkinValentine"
#pragma link "dxSkinVisualStudio2013Blue"
#pragma link "dxSkinVisualStudio2013Dark"
#pragma link "dxSkinVisualStudio2013Light"
#pragma link "dxSkinVS2010"
#pragma link "dxSkinWhiteprint"
#pragma link "dxSkinXmas2008Blue"
#pragma link "frxDock"
#pragma link "InspectorBar"
#pragma link "InspLinks"
#pragma link "RTTIInspectorBar"
#pragma resource "*.dfm"
TFormDev *FormDev;
//---------------------------------------------------------------------------
__fastcall TFormDev::TFormDev(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormDev::AEInspectorEditLink1SetProperties(TObject *Sender, TRect &R,
          TInspectorItem *Item)
{
	ShowMessage(L"OnSetProperties");
}
//---------------------------------------------------------------------------

void __fastcall TFormDev::RTTIInspectorBar1EditUpdate(TObject *Sender, TInspectorPanel *AInspectorPanel,
          TInspectorItem *AInspectorItem)
{
	ShowMessage(L"On Edit Update");
}
//---------------------------------------------------------------------------

void __fastcall TFormDev::RTTIInspectorBar1EditStop(TObject *Sender, TInspectorPanel *AInspectorPanel,
          TInspectorItem *AInspectorItem)
{
	//ShowMessage(L"stop");
}
//---------------------------------------------------------------------------


void __fastcall TFormDev::RTTIInspectorBar1EditColorChange(TObject *Sender, TInspectorPanel *AInspectorPanel,
          TInspectorItem *AInspectorItem, TColor AColor)
{
	ShowMessage(L"Color Change");
}
//---------------------------------------------------------------------------

