#pragma once
#include "wx\wx.h"
//#include <vector>

class Main : public wxFrame
{
public:
	Main();
	~Main();

public:
	void OnButtonClicked(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();

private:

	wxButton** btns;
	//std::vector<wxButton> btns;

	wxTextCtrl* calcBox = nullptr;
	wxButton* test0 = nullptr;
	wxButton* test1 = nullptr;
	wxButton* test2 = nullptr;
	wxButton* test3 = nullptr;
	wxButton* test4 = nullptr;
	wxButton* test5 = nullptr;
	wxButton* test6 = nullptr;
	wxButton* test7 = nullptr;
	wxButton* test8 = nullptr;
	wxButton* test9 = nullptr;
	wxButton* testA = nullptr;
	wxButton* testB = nullptr;
	wxButton* testC = nullptr;
	wxButton* testD = nullptr;
	wxButton* testE = nullptr;
	wxButton* testF = nullptr;
	wxButton* testPlus = nullptr;
	wxButton* testMinus = nullptr;
	wxButton* testTimes = nullptr;
	wxButton* testDiv = nullptr;
	wxButton* testMod = nullptr;
	wxButton* testResult = nullptr;
	wxButton* testNegate = nullptr;
	wxButton* testHex = nullptr;
	wxButton* testDec = nullptr;
	wxButton* testBin = nullptr;
	wxButton* testClear = nullptr;

	//wxButton** btns;
	//int nFieldW = 10;
	int nFieldH = 100;
};

