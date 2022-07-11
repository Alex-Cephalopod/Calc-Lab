#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(319, 670))
{
	Factory_Button btnCreator;
	FctBtns = new wxButton * [27];

	calcBox = new wxTextCtrl(this, 11000, "", wxPoint(0, 0), wxSize(300, 100), wxTE_RIGHT | wxTE_READONLY);

	for (int i = 0; i < 16; i++)
	{
		FctBtns[i] = btnCreator.CreateNumberButtons(this, i);
	}

	for (int i = 16; i < 27; i++)
	{
		FctBtns[i] = btnCreator.CreateFunctionButtons(this, i);
	}

	for (int i = 0; i < 27; i++)
	{
		FctBtns[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	}

}

void Main::OnButtonClicked(wxCommandEvent& evt)
{
	int action = evt.GetId();

	if (action >= 0 && action < 10)
	{
		*calcBox << action;
	}
	else
	{
		switch (action)
		{
		case 10:
			*calcBox << "A";
			break;
		case 11:
			*calcBox << "B";
			break;
		case 12:
			*calcBox << "C";
			break;
		case 13:
			*calcBox << "D";
			break;
		case 14:
			*calcBox << "E";
			break;
		case 15:
			*calcBox << "F";
			break;
		case 1001:
			*calcBox << "HEX";
			break;
		case 1002:
			*calcBox << "DEC";
			break;
		case 1003:
			*calcBox << "BIN";
			break;
		case 1004:
			*calcBox << "Clear";
			break;
		case 1005:
			*calcBox << "(-)";
			break;
		case 1006:
			*calcBox << "+";
			break;
		case 1007:
			*calcBox << "-";
			break;
		case 1008:
			*calcBox << "*";
			break;
		case 1009:
			*calcBox << "/";
			break;
		case 1010:
			*calcBox << "%";
			break;
		case 1011:
			*calcBox << "=";
			break;
		}
	}

}


Main::~Main()
{
	delete calcBox;
	delete test0;
	delete test1;
	delete test2;
	delete test3;
	delete test4;
	delete test5;
	delete test6 ;
	delete test7;
	delete test8;
	delete test9;
	delete testA;
	delete testB;
	delete testC;
	delete testD;
	delete testE;
	delete testF;
	delete testPlus;
	delete testMinus ;
	delete testTimes ;
	delete testDiv ;
	delete testMod ;
	delete testResult ;
	delete testNegate ;
	delete testHex ;
	delete testDec ;
	delete testBin ;
	delete testClear;
	
	delete[] FctBtns;
	delete[] btns;
}