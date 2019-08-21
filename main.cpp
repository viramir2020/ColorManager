//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "ABOUT.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TBitmap* im1=new TBitmap();
AnsiString filen;
int wd, hg;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
if (ParamCount>(void*)0)
{
if (ParamStr(1).Length()>1)
{
if (FileExists(ParamStr(1).c_str()))
{
filen=ParamStr(1);
TJPEGImage *jpg = new TJPEGImage();
jpg->LoadFromFile(filen);
Graphics::TBitmap *bmp1;
bmp1 = new Graphics::TBitmap();
bmp1->Assign(jpg);
im1=bmp1;
Image1->Picture->Bitmap=im1;
}
else
{
ShowMessage("Файл " + ParamStr(1) + " не существует!");
}
}}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NormExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()<< fsBold;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()>> fsBold;
MNorm->Checked=True;
Image1->Picture->Bitmap=im1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ProtanExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()>> fsBold;
BProtan->Font->Style=TFontStyles()<< fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BProtan->Font->Style=TFontStyles()<< fsBold;
BTritan->Font->Style=TFontStyles()>> fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
MProtan->Checked=True;
TBitmap* bmp=new TBitmap();
bmp->Assign(im1);
Form1->Image1->Picture->Bitmap->Assign(bmp);
RGBTRIPLE*ptr;
for(int y = 0; y < bmp->Height; y++)
{
ptr = (RGBTRIPLE*)bmp->ScanLine[y];
for (int x = 0; x < bmp->Width; x++)
{
int  r,g ,b;
r=ptr[x].rgbtRed;
g=ptr[x].rgbtGreen;
b=ptr[x].rgbtBlue;
int   r1,g1,b1;
r1=r*0.20+g*0.99-b*0.19;
g1=r*0.16+g*0.79+b*0.04;
b1=r*0.01-g*0.01+b;
if (r1>255) r1=255;
if (g1>255) g1=255;
if (b1>255) b1=255;
if (r1<0) r1=0;
if (g1<0) g1=0;
if (b1<0) b1=0;
ptr[x].rgbtRed=r1;
ptr[x].rgbtGreen=g1;
ptr[x].rgbtBlue=b1;
}
}
Form1->Image1->Picture->Bitmap->Assign(bmp);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeuteranExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()>> fsBold;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()<< fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()>> fsBold;
MDeuteran->Checked=True;
TBitmap* bmp=new TBitmap();
bmp->Assign(im1);
Form1->Image1->Picture->Bitmap->Assign(bmp);
RGBTRIPLE*ptr;
for(int y = 0; y < bmp->Height; y++)
{
ptr = (RGBTRIPLE*)bmp->ScanLine[y];
for (int x = 0; x < bmp->Width; x++)
{
int  r,g ,b;
r=ptr[x].rgbtRed;
g=ptr[x].rgbtGreen;
b=ptr[x].rgbtBlue;
int   r1,g1,b1;
r1=r*0.43+g*0.72-b*0.15;
g1=r*0.34+g*0.57+b*0.09;
b1=g*0.03-r*0.02+b;
if (r1>255) r1=255;
if (g1>255) g1=255;
if (b1>255) b1=255;
if (r1<0) r1=0;
if (g1<0) g1=0;
if (b1<0) b1=0;
ptr[x].rgbtRed=r1;
ptr[x].rgbtGreen=g1;
ptr[x].rgbtBlue=b1;
}
}
Form1->Image1->Picture->Bitmap->Assign(bmp);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TritanExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()>> fsBold;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()<< fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
MTritan->Checked=True;
TBitmap* bmp=new TBitmap();
bmp->Assign(im1);
Form1->Image1->Picture->Bitmap->Assign(bmp);
RGBTRIPLE*ptr;
for(int y = 0; y < bmp->Height; y++)
{
ptr = (RGBTRIPLE*)bmp->ScanLine[y];
for (int x = 0; x < bmp->Width; x++)
{
int  r,g ,b;
r=ptr[x].rgbtRed;
g=ptr[x].rgbtGreen;
b=ptr[x].rgbtBlue;
int   r1,g1,b1;
r1=r*0.97+g*0.11-b*0.08;
g1=r*0.02+g*0.82+b*0.16;
b1=g*0.88-r*0.06+b*0.18;
if (r1>255) r1=255;
if (g1>255) g1=255;
if (b1>255) b1=255;
if (r1<0) r1=0;
if (g1<0) g1=0;
if (b1<0) b1=0;
ptr[x].rgbtRed=r1;
ptr[x].rgbtGreen=g1;
ptr[x].rgbtBlue=b1;
}
}
Form1->Image1->Picture->Bitmap->Assign(bmp);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MonoChrExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()>> fsBold;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()>> fsBold;
BMonoChr->Font->Style=TFontStyles()<< fsBold;
MMonoChr->Checked=True;
TBitmap* bmp=new TBitmap();
bmp->Assign(im1);
Form1->Image1->Picture->Bitmap->Assign(bmp);
RGBTRIPLE*ptr;
for(int y = 0; y < bmp->Height; y++)
{
ptr = (RGBTRIPLE*)bmp->ScanLine[y];
for (int x = 0; x < bmp->Width; x++)
{
int r,g ,b;
r=ptr[x].rgbtRed;
g=ptr[x].rgbtGreen;
b=ptr[x].rgbtBlue;
int gray=r*0.3+g*0.59+b*0.11;
if (gray>255) gray=255;
if (gray<0) gray=0;
ptr[x].rgbtRed=gray;
ptr[x].rgbtGreen=gray;
ptr[x].rgbtBlue=gray;
}
}
Form1->Image1->Picture->Bitmap->Assign(bmp);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OpenExecute(TObject *Sender)
{
if (op1->Execute())
{
filen=op1->FileName;
TJPEGImage *jpg = new TJPEGImage();
jpg->LoadFromFile(filen);
im1->Assign(jpg);
Image1->Picture->Bitmap=im1;
BNorm->Font->Style=TFontStyles()<< fsBold;
MNorm->Checked=True;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()>>fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SaveExecute(TObject *Sender)
{
if (sv1->Execute())
{
TJPEGImage *jpg = new TJPEGImage();
jpg->Assign(Image1->Picture->Bitmap);
jpg->SaveToFile(sv1->FileName);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExitExecute(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
AboutBox->ShowModal();
}
//---------------------------------------------------------------------------




