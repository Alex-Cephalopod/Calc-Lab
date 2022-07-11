#pragma once

#include "wx\wx.h"
#include <string>
#include <sstream>

class Factory_Button
{

public:

	wxButton *CreateNumberButtons(wxFrame* parent, int i);
	wxButton *CreateFunctionButtons(wxFrame* parent, int i);
	~Factory_Button();

};

