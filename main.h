//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TOpenPictureDialog *op1;
	TSavePictureDialog *sv1;
	TActionList *ActionList1;
	TAction *Norm;
	TAction *Protan;
	TAction *Deuteran;
	TAction *Tritan;
	TAction *MonoChr;
	TAction *Open;
	TAction *Save;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *MProtan;
	TMenuItem *MDeuteran;
	TMenuItem *MTritan;
	TMenuItem *MMonoChr;
	TMenuItem *N7;
	TAction *Exit;
	TMenuItem *N8;
	TMenuItem *N9;
	TMenuItem *MNorm;
	TMenuItem *N3;
	TMenuItem *N4;
	TPanel *Panel1;
	TButton *BNorm;
	TButton *BProtan;
	TButton *BDeuteran;
	TButton *BTritan;
	TButton *BMonoChr;
	TButton *BOpen;
	TButton *BSave;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall NormExecute(TObject *Sender);
	void __fastcall ProtanExecute(TObject *Sender);
	void __fastcall DeuteranExecute(TObject *Sender);
	void __fastcall TritanExecute(TObject *Sender);
	void __fastcall MonoChrExecute(TObject *Sender);
	void __fastcall OpenExecute(TObject *Sender);
	void __fastcall SaveExecute(TObject *Sender);
	void __fastcall ExitExecute(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
