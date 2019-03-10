//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
AnsiString s1;
AnsiString s2;
AnsiString znak;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if(znak==""){
s1=s1+((TButton*)Sender)->Text;
Edit1->Text=s1;
}
else
{
s2=s2+((TButton*)Sender)->Text;
Edit1->Text=s2;
}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button12Click(TObject *Sender)
{
//ShowMessage(s1);
if(znak=="+") Edit1->Text = IntToStr(StrToInt(s1)+StrToInt(s2));
if(znak=="-") Edit1->Text = IntToStr(StrToInt(s1)-StrToInt(s2));
if(znak=="/")
{	
	if(StrToInt(s2)==0)
	{
		Edit1->Text="Делим на 0";
	}
	else
	{
		if(znak=="/") Edit1->Text = IntToStr(StrToInt(s1)/StrToInt(s2));
	}
}
if(znak=="X") Edit1->Text = IntToStr(StrToInt(s1)*StrToInt(s2));
s1="";
s2="";
znak="";
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button16Click(TObject *Sender)
{
znak=((TButton*)Sender)->Text;	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button21Click(TObject *Sender)
{
s1="";
s2="";
znak="";
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button22Click(TObject *Sender)
{
s1="";
s2="";
znak="";
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button19Click(TObject *Sender)
{
Edit1->Text=FloatToStr(sqrt(StrToFloat(s1)));	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button17Click(TObject *Sender)
{
Edit1->Text=FloatToStr(1/StrToFloat(s1));	
}
//---------------------------------------------------------------------------
