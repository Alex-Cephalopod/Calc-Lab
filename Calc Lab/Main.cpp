#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(550, 700))
{
	calcBox = new wxTextCtrl(this, 11000, "", wxPoint(10, 10), wxSize(510, 105), wxTE_READONLY);
	testHex = new wxButton(this, 11001, "HEX", wxPoint(10, 130), wxSize(75, 75));
	testDec = new wxButton(this, 11002, "DEC", wxPoint(110, nFieldH), wxSize(75, 75));
	testBin = new wxButton(this, 11003, "BIN", wxPoint(210, nFieldH), wxSize(75, 75));
	testNegate = new wxButton(this, 11004, "(-)", wxPoint(310, nFieldH), wxSize(75, 75));
	test7 = new wxButton(this, 10007, "7", wxPoint(10, nFieldH + 100), wxSize(75, 75));
	test8 = new wxButton(this, 10008, "8", wxPoint(110, nFieldH + 100), wxSize(75, 75));
	test9 = new wxButton(this, 10009, "9", wxPoint(210, nFieldH + 100), wxSize(75, 75));
	testPlus = new wxButton(this, 11005, "+", wxPoint(310, nFieldH + 100), wxSize(75, 75));
	test4 = new wxButton(this, 10004, "4", wxPoint(10, nFieldH +200), wxSize(75, 75));
	test5 = new wxButton(this, 10005, "5", wxPoint(110, nFieldH + 200), wxSize(75, 75));
	test6 = new wxButton(this, 10006, "6", wxPoint(210, nFieldH + 200), wxSize(75, 75));
	testMinus = new wxButton(this, 11006, "-", wxPoint(310, nFieldH + 200), wxSize(75, 75));
	test1 = new wxButton(this, 10001, "1", wxPoint(10, nFieldH + 300), wxSize(75, 75));
	test2 = new wxButton(this, 10002, "2", wxPoint(110, nFieldH + 300), wxSize(75, 75));
	test3 = new wxButton(this, 10003, "3", wxPoint(210, nFieldH + 300), wxSize(75, 75));
	testTimes = new wxButton(this, 11007, "*", wxPoint(310, nFieldH + 300), wxSize(75, 75));
	test0 = new wxButton(this, 10000, "0", wxPoint(10, nFieldH + 400), wxSize(75, 75));
	testMod = new wxButton(this, 11008, "MOD", wxPoint(110, nFieldH + 400), wxSize(75, 75));
	testDiv = new wxButton(this, 11009, "/", wxPoint(210, nFieldH + 400), wxSize(75, 75));
	testResult = new wxButton(this, 11010, "=", wxPoint(310, nFieldH + 400), wxSize(75, 75));
	testC = new wxButton(this, 11011, "C", wxPoint(410, 130), wxSize(75, 75));

	calcBox->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	test0->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	test1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	test2->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	test3->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	test4->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	test5->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	test6->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	test7->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	test8->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	test9->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testPlus->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testMinus->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testTimes->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testDiv->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testMod->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testResult->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testNegate->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testHex->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testDec->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testBin->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	testC->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);

	//int i = 0;

	/*btns = new wxButton * [20];

	for (int x = 1; x <= 4; x++)
	{
		for (int y = 1; y <= 5; y++)
		{
			btns[i] = new wxButton(this, wxID_ANY, wxPoint());
		}
	}*/

	// I tried to create a nested for loop, but it did not work. Will work on it before next class
}

void Main::OnButtonClicked(wxCommandEvent& evt)
{
	int action = evt.GetId() - 10000;
	int mode = 0;
	
	if (action >= 0 && action < 10)
	{
		*calcBox << action;
	}

	else
	{
		switch (action)
		{
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
			*calcBox << "(-)";
			break;
		case 1005:
			*calcBox << "+";
			break;
		case 1006:
			*calcBox << "-";
			break;
		case 1007:
			*calcBox << "*";
			break;
		case 1008:
			*calcBox << "MOD";
			break;
		case 1009:
			*calcBox << "/";
			break;
		case 1010:
			*calcBox << "=";
			break;
		case 1011:
			*calcBox << "C";
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
	delete testC ;
}