#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(319, 670))
{

	btns = new wxButton * [27];

	calcBox = new wxTextCtrl(this, 11000, "", wxPoint(0, 0), wxSize(300, 100), wxTE_RIGHT | wxTE_READONLY);
	

	testHex = new wxButton(this, 1001, "HEX", wxPoint(0, 100), wxSize(75, 75));
	btns[0] = testHex;
	testDec = new wxButton(this, 1002, "DEC", wxPoint(75, 100), wxSize(75, 75));
	btns[1] = testDec;
	testBin = new wxButton(this, 1003, "BIN", wxPoint(150, 100), wxSize(75, 75));
	btns[2] = testBin;
	testClear = new wxButton(this, 1011, "Clr", wxPoint(225, 100), wxSize(75, 75));
	btns[3] = testClear;

	testA = new wxButton(this, 10, "A", wxPoint(0, 175), wxSize(75, 75));
	btns[4] = testA;
	testB = new wxButton(this, 11, "B", wxPoint(75, 175), wxSize(75, 75));
	btns[5] = testB;
	testC = new wxButton(this, 12, "C", wxPoint(150, 175), wxSize(75, 75));
	btns[6] = testC;
	testNegate = new wxButton(this, 1012, "(-)", wxPoint(225, 175), wxSize(75, 75));
	btns[7] = testNegate;

	testD = new wxButton(this, 13, "D", wxPoint(0, 250), wxSize(75, 75));
	btns[8] = testD;
	testE = new wxButton(this, 14, "E", wxPoint(75, 250), wxSize(75, 75));
	btns[9] = testE;
	testF = new wxButton(this, 15, "F", wxPoint(150, 250), wxSize(75, 75));
	btns[10] = testF;
	testPlus = new wxButton(this, 1013, "+", wxPoint(225, 250), wxSize(75, 75));
	btns[11] = testPlus;

	test7 = new wxButton(this, 7, "7", wxPoint(0, 325), wxSize(75, 75));
	btns[12] = test7;
	test8 = new wxButton(this, 8, "8", wxPoint(75,325), wxSize(75, 75));
	btns[13] = test8;
	test9 = new wxButton(this, 9, "9", wxPoint(150,325), wxSize(75, 75));
	btns[14] = test9;
	testMinus = new wxButton(this, 1014, "-", wxPoint(225, 325), wxSize(75, 75));
	btns[15] = testMinus;

	test4 = new wxButton(this, 4, "4", wxPoint(0, 400), wxSize(75, 75));
	btns[16] = test4;
	test5 = new wxButton(this, 5, "5", wxPoint(75, 400), wxSize(75, 75));
	btns[17] = test5;
	test6 = new wxButton(this, 6, "6", wxPoint(150, 400), wxSize(75, 75));
	btns[18] = test6;
	testTimes = new wxButton(this, 1015, "*", wxPoint(225, 400), wxSize(75, 75));
	btns[19] = testTimes;

	test1 = new wxButton(this, 1, "1", wxPoint(0, 475), wxSize(75, 75));
	btns[20] = test1;
	test2 = new wxButton(this, 2, "2", wxPoint(75, 475), wxSize(75, 75));
	btns[21] = test2;
	test3 = new wxButton(this, 3, "3", wxPoint(150, 475), wxSize(75, 75));
	btns[22] = test3;
	testDiv = new wxButton(this, 1016, "/", wxPoint(225, 475), wxSize(75, 75));
	btns[23] = testDiv;

	test0 = new wxButton(this, 0, "0", wxPoint(0, 550), wxSize(150, 75));
	btns[24] = test0;
	testMod = new wxButton(this, 1017, "MOD%", wxPoint(150, 550), wxSize(75, 75));
	btns[25] = testMod;
	testResult = new wxButton(this, 1018, "=", wxPoint(225, 550), wxSize(75, 75));
	btns[26] = testResult;
	
	for (int i = 0; i < 27; i++)
	{
		btns[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	}

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
	int action = evt.GetId();
	//int mode = 0;

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
		case 1011:
			*calcBox << "Clear";
			break;
		case 1012:
			*calcBox << "(-)";
			break;
		case 1013:
			*calcBox << "+";
			break;
		case 1014:
			*calcBox << "-";
			break;
		case 1015:
			*calcBox << "*";
			break;
		case 1016:
			*calcBox << "/";
			break;
		case 1017:
			*calcBox << "%";
			break;
		case 1018:
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
	
	delete[] btns;
}