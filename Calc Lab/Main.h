#pragma once
#include "wx\wx.h"
#include "Factory_Button.h"
#include "CalculatorProcessor.h"
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
	wxButton** FctBtns;

	wxTextCtrl* calcBox = nullptr;
	wxTextCtrl* opBox = nullptr;
	
	int nFieldH = 100;
};

