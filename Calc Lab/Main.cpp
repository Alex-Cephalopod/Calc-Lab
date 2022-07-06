#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(550, 700))
{
	calcBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(510, 105), wxTE_READONLY);
	testHex = new wxButton(this, wxID_ANY, "HEX", wxPoint(10, 130), wxSize(75, 75));
	testDec = new wxButton(this, wxID_ANY, "DEC", wxPoint(110, nFieldH), wxSize(75, 75));
	testBin = new wxButton(this, wxID_ANY, "BIN", wxPoint(210, nFieldH), wxSize(75, 75));
	testNegate = new wxButton(this, wxID_ANY, "(-)", wxPoint(310, nFieldH), wxSize(75, 75));
	test7 = new wxButton(this, wxID_ANY, "7", wxPoint(10, nFieldH + 100), wxSize(75, 75));
	test8 = new wxButton(this, wxID_ANY, "8", wxPoint(110, nFieldH + 100), wxSize(75, 75));
	test9 = new wxButton(this, wxID_ANY, "9", wxPoint(210, nFieldH + 100), wxSize(75, 75));
	testPlus = new wxButton(this, wxID_ANY, "+", wxPoint(310, nFieldH + 100), wxSize(75, 75));
	test4 = new wxButton(this, wxID_ANY, "4", wxPoint(10, nFieldH +200), wxSize(75, 75));
	test5 = new wxButton(this, wxID_ANY, "5", wxPoint(110, nFieldH + 200), wxSize(75, 75));
	test6 = new wxButton(this, wxID_ANY, "6", wxPoint(210, nFieldH + 200), wxSize(75, 75));
	testMinus = new wxButton(this, wxID_ANY, "-", wxPoint(310, nFieldH + 200), wxSize(75, 75));
	test1 = new wxButton(this, wxID_ANY, "1", wxPoint(10, nFieldH + 300), wxSize(75, 75));
	test2 = new wxButton(this, wxID_ANY, "2", wxPoint(110, nFieldH + 300), wxSize(75, 75));
	test3 = new wxButton(this, wxID_ANY, "3", wxPoint(210, nFieldH + 300), wxSize(75, 75));
	testTimes = new wxButton(this, wxID_ANY, "x", wxPoint(310, nFieldH + 300), wxSize(75, 75));
	test0 = new wxButton(this, wxID_ANY, "0", wxPoint(10, nFieldH + 400), wxSize(75, 75));
	testMod = new wxButton(this, wxID_ANY, "MOD", wxPoint(110, nFieldH + 400), wxSize(75, 75));
	testDiv = new wxButton(this, wxID_ANY, "/", wxPoint(210, nFieldH + 400), wxSize(75, 75));
	testResult = new wxButton(this, wxID_ANY, "=", wxPoint(310, nFieldH + 400), wxSize(75, 75));
	testC = new wxButton(this, wxID_ANY, "C", wxPoint(410, 130), wxSize(75, 75));

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