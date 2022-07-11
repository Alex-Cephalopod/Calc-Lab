#include "Factory_Button.h"

//wxButton* temp = nullptr;

wxButton *Factory_Button::CreateNumberButtons(wxFrame * parent, int i)
{

	std::string number;
	std::stringstream store;

	store << i;
	store >> number;

	if (i == 0)
	{
		return new wxButton(parent, i, "0", wxPoint(0, 550), wxSize(150, 75));
	}

	else if (i > 0 && i < 4)
	{
		return new wxButton(parent, i, number, wxPoint(75 * i - 75, 475), wxSize(75, 75));
	}

	else if (i > 3 && i < 7)
	{
		return new wxButton(parent, i, number, wxPoint(75 * (i-3) - 75, 400), wxSize(75, 75));
	}

	else if (i > 6 && i < 10)
	{
		return new wxButton(parent, i, number, wxPoint(75 * (i - 6) - 75, 325), wxSize(75, 75));
	}

	else {
		switch (i)
		{
		case 10:
			return new wxButton(parent, i, "A", wxPoint(0, 175), wxSize(75, 75));
			break;
		case 11:
			return new wxButton(parent, i, "B", wxPoint(75, 175), wxSize(75, 75));
			break;
		case 12:
			return new wxButton(parent, i, "C", wxPoint(150, 175), wxSize(75, 75));
			break;
		case 13:
			return new wxButton(parent, i, "D", wxPoint(0, 250), wxSize(75, 75));
			break;
		case 14:
			return new wxButton(parent, i, "E", wxPoint(75, 250), wxSize(75, 75));
			break;
		case 15:
			return new wxButton(parent, i, "F", wxPoint(150, 250), wxSize(75, 75));
		}
	}
}

wxButton* Factory_Button::CreateFunctionButtons(wxFrame *parent, int i)
{
	switch (i)
	{
	case 16:
		return new wxButton(parent, 1001, "HEX", wxPoint(0, 100), wxSize(75, 75));
	case 17:
		return new wxButton(parent, 1002, "DEC", wxPoint(75, 100), wxSize(75, 75));
	case 18:
		return new wxButton(parent, 1003, "BIN", wxPoint(150, 100), wxSize(75, 75));
	case 19:
		return new wxButton(parent, 1004, "Clr", wxPoint(225, 100), wxSize(75, 75));
	case 20:
		return new wxButton(parent, 1005, "(-)", wxPoint(225, 175), wxSize(75, 75));
	case 21:
		return new wxButton(parent, 1006, "+", wxPoint(225, 250), wxSize(75, 75));
	case 22:
		return new wxButton(parent, 1007, "-", wxPoint(225, 325), wxSize(75, 75));
	case 23:
		return new wxButton(parent, 1008, "*", wxPoint(225, 400), wxSize(75, 75));
	case 24:
		return new wxButton(parent, 1009, "/", wxPoint(225, 475), wxSize(75, 75));
	case 25:
		return new wxButton(parent, 1010, "%", wxPoint(150, 550), wxSize(75, 75));
	case 26:
		return new wxButton(parent, 1011, "=", wxPoint(225, 550), wxSize(75, 75));
	}
}

Factory_Button::~Factory_Button()
{
	//delete temp;
}
