//---------------------------------------------------------------------------

#ifndef DevFormH
#define DevFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "cxPC.hpp"
#include "dxDockControl.hpp"
#include "dxDockPanel.hpp"
#include "cxClasses.hpp"
#include "dxSkinBlack.hpp"
#include "dxSkinBlue.hpp"
#include "dxSkinBlueprint.hpp"
#include "dxSkinCaramel.hpp"
#include "dxSkinCoffee.hpp"
#include "dxSkinDarkRoom.hpp"
#include "dxSkinDarkSide.hpp"
#include "dxSkinDevExpressDarkStyle.hpp"
#include "dxSkinDevExpressStyle.hpp"
#include "dxSkinFoggy.hpp"
#include "dxSkinGlassOceans.hpp"
#include "dxSkinHighContrast.hpp"
#include "dxSkiniMaginary.hpp"
#include "dxSkinLilian.hpp"
#include "dxSkinLiquidSky.hpp"
#include "dxSkinLondonLiquidSky.hpp"
#include "dxSkinMcSkin.hpp"
#include "dxSkinMetropolis.hpp"
#include "dxSkinMetropolisDark.hpp"
#include "dxSkinMoneyTwins.hpp"
#include "dxSkinOffice2007Black.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinOffice2007Green.hpp"
#include "dxSkinOffice2007Pink.hpp"
#include "dxSkinOffice2007Silver.hpp"
#include "dxSkinOffice2010Black.hpp"
#include "dxSkinOffice2010Blue.hpp"
#include "dxSkinOffice2010Silver.hpp"
#include "dxSkinOffice2013DarkGray.hpp"
#include "dxSkinOffice2013LightGray.hpp"
#include "dxSkinOffice2013White.hpp"
#include "dxSkinPumpkin.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "dxSkinsdxDockControlPainter.hpp"
#include "dxSkinSeven.hpp"
#include "dxSkinSevenClassic.hpp"
#include "dxSkinSharp.hpp"
#include "dxSkinSharpPlus.hpp"
#include "dxSkinSilver.hpp"
#include "dxSkinSpringTime.hpp"
#include "dxSkinStardust.hpp"
#include "dxSkinSummer2008.hpp"
#include "dxSkinTheAsphaltWorld.hpp"
#include "dxSkinValentine.hpp"
#include "dxSkinVisualStudio2013Blue.hpp"
#include "dxSkinVisualStudio2013Dark.hpp"
#include "dxSkinVisualStudio2013Light.hpp"
#include "dxSkinVS2010.hpp"
#include "dxSkinWhiteprint.hpp"
#include "dxSkinXmas2008Blue.hpp"
#include "frxDock.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "InspectorBar.hpp"
#include "InspLinks.hpp"
#include "RTTIInspectorBar.hpp"
//---------------------------------------------------------------------------
class TFormDev : public TForm
{
__published:	// IDE-managed Components
	TdxDockSite *dxDockSite1;
	TdxDockPanel *dxDockPanel1;
	TdxDockPanel *dxDockPanel2;
	TdxLayoutDockSite *dxLayoutDockSite1;
	TdxVertContainerDockSite *dxVertContainerDockSite1;
	TdxDockingManager *dxDockingManager1;
	TRTTIInspectorBar *RTTIInspectorBar1;
	TRTTIInspectorBar *RTTIInspectorBar2;
	void __fastcall AEInspectorEditLink1SetProperties(TObject *Sender, TRect &R, TInspectorItem *Item);
	void __fastcall RTTIInspectorBar1EditUpdate(TObject *Sender, TInspectorPanel *AInspectorPanel,
          TInspectorItem *AInspectorItem);
	void __fastcall RTTIInspectorBar1EditStop(TObject *Sender, TInspectorPanel *AInspectorPanel,
          TInspectorItem *AInspectorItem);
	void __fastcall RTTIInspectorBar1EditColorChange(TObject *Sender, TInspectorPanel *AInspectorPanel,
          TInspectorItem *AInspectorItem, TColor AColor);


private:	// User declarations
public:		// User declarations
	__fastcall TFormDev(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormDev *FormDev;
//---------------------------------------------------------------------------
#endif
