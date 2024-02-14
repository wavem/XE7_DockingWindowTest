//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvToolBar.hpp"
#include "AdvMenus.hpp"
#include "AdvToolBarStylers.hpp"
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "BaseGrid.hpp"
#include <Vcl.Grids.hpp>
#include "AdvGlowButton.hpp"
#include "AdvSmoothDock.hpp"
#include "INIInspectorBar.hpp"
#include "InspectorBar.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "AdvOfficeComboBox.hpp"
#include "RTTIInspectorBar.hpp"
#include "AdvPanel.hpp"
#include "ToolPanels.hpp"
#include "AdvSmoothExpanderButtonPanel.hpp"
#include "AdvSmoothExpanderPanel.hpp"
#include "AdvSmoothPanel.hpp"
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TMemo *memo;
	TAdvDockPanel *DockPanel_Top;
	TButton *btn_Test;
	TAdvToolBar *AdvToolBar1;
	TAdvDockPanel *DockPanel_Right;
	TAdvToolBar *AdvToolBar2;
	TAdvToolBarButton *AdvToolBarButton1;
	TAdvToolBarMenuButton *AdvToolBarMenuButton1;
	TAdvMenuStyler *AdvMenuStyler1;
	TAdvToolBarFantasyStyler *AdvToolBarFantasyStyler1;
	TAdvToolBarOfficeStyler *AdvToolBarOfficeStyler1;
	TAdvToolBarContainer *AdvToolBarContainer1;
	TAdvToolBar *AdvToolBar4;
	TAdvGlowMenuButton *AdvGlowMenuButton1;
	TAdvToolBar *AdvToolBar5;
	TAdvOfficeFontSizeSelector *AdvOfficeFontSizeSelector1;
	TRTTIInspectorBar *RTTIInspectorBar1;
	TAdvToolPanel *AdvToolPanel1;
	TAdvToolPanelTab *AdvToolPanelTab1;
	TAdvToolPanel *AdvToolPanel2;
	TAdvToolPanel *AdvToolPanel3;
	TAdvToolPanel *AdvToolPanel4;
	TAdvToolPanel *AdvToolPanel5;
	TButton *Button1;
	TRTTIInspectorBar *RTTIInspectorBar2;
	TButton *btn_Dialog;
	void __fastcall btn_TestClick(TObject *Sender);
	void __fastcall btn_DialogClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);

public: // FUNCTIONS
	void __fastcall InitProgram();
    void __fastcall PrintMsg(UnicodeString _str);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
