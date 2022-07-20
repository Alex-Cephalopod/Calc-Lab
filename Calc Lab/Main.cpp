#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE()

bool equation = true;
bool equalsHit = false;
char symbol;
int num = 0;
int num2 = 0;
int hist = 0;
std::string strNum;

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(400, 670), (wxDEFAULT_FRAME_STYLE & ~wxRESIZE_BORDER))
{
	Factory_Button btnCreator;
	FctBtns = new wxButton * [27];

	calcBox = new wxTextCtrl(this, 11000, "", wxPoint(0, 0), wxSize(385, 100), wxTE_RIGHT | wxTE_READONLY);
	calcBox->SetFont(calcBox->GetFont().Scale(2));

	opBox = new wxTextCtrl(this, 12000, "", wxPoint(0, 175), wxSize(224, 150), wxTE_CENTER | wxTE_READONLY);
	opBox->SetFont(opBox->GetFont().Scale(7));

	for (int i = 0; i < 10; i++)
	{
		FctBtns[i] = btnCreator.CreateNumberButtons(this, i);
	}

	for (int i = 10; i < 21; i++)
	{
		FctBtns[i] = btnCreator.CreateFunctionButtons(this, i);
	}

	for (int i = 0; i < 21; i++)
	{
		FctBtns[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
	}

}

void Main::OnButtonClicked(wxCommandEvent& evt)
{
	Factory_Button btn;
	int action = evt.GetId();

	if (action >= 0 && action < 10)
	{
		if (equalsHit)
		{
			opBox->Clear();
			calcBox->Clear();
			equalsHit = false;
			strNum = "";
		}

		*calcBox << action;
		strNum += std::to_string(action);
	}
	else
	{
		switch (action)
		{
		case 1001:
		{
			if (strNum.length() != 0)
			{
				equalsHit = true;
				calcBox->Clear();
				opBox->Clear();
				int temp = stoi(strNum);
				*calcBox << CalculatorProcessor::GetInstance().ToHex(temp);
				*opBox << "HEX";
			}
			break;
		}
		case 1002:
			if (strNum.length() != 0)
			{
				calcBox->Clear();
				opBox->Clear();
				*calcBox << strNum;
				*opBox << "DEC";
				equalsHit = true;
			}
			break;
		case 1003:
			if (strNum.length() != 0)
			{
				equalsHit = true;
				calcBox->Clear();
				opBox->Clear();
				int temp = stoi(strNum);
				*calcBox << CalculatorProcessor::GetInstance().toBin(temp);
				*opBox << "BIN";
				break;
			}
			break;
		case 1004:
			calcBox->Clear();
			opBox->Clear();
			hist = 0;
			num = 0;
			num2 = 0;
			strNum = "";
			symbol = NULL;
			equation = true;
			equalsHit = false;
			break;


		case 1005:
		{
			if (strNum.length() != 0)
			{
				int temp = stoi(strNum);
				temp = CalculatorProcessor::GetInstance().NegarNumero(temp);
				strNum = std::to_string(temp);
				calcBox->Clear();
				opBox->Clear();
				*calcBox << strNum;
			}
			break;
		}

		case 1006:

			if (equation && strNum.length() != 0)
			{

				num = stoi(strNum);

				symbol = '+';

				opBox->Clear();
				*opBox << symbol;

				calcBox->Clear();

				strNum = "";

				equation = false;
			}
			break;

		case 1007:
			if (equation && strNum.length() != 0)
			{
				num = stoi(strNum);

				symbol = '-';

				opBox->Clear();
				*opBox << symbol;

				calcBox->Clear();

				strNum = "";

				equation = false;
			}
			break;
		case 1008:
			if(equation && strNum.length() != 0)
			{
				num = stoi(strNum);

				symbol = '*';

				opBox->Clear();
				*opBox << symbol;

				calcBox->Clear();

				strNum = "";

				equation = false;
			}
			break;
		case 1009:
			if (equation && strNum.length() != 0)
			{
				num = stoi(strNum);

				symbol = '/';

				opBox->Clear();
				*opBox << symbol;

				calcBox->Clear();

				strNum = "";

				equation = false;
			}
			break;
		case 1010:
			if (equation && strNum.length() != 0)
			{
				num = stoi(strNum);

				symbol = '%';

				opBox->Clear();
				*opBox << symbol;

				calcBox->Clear();

				strNum = "";

				equation = false;
			}
			break;

		case 1011:
			if (!equation && strNum.length() != 0)
			{
				opBox->Clear();
				*opBox << "=";
				equalsHit = true;
				num2 = stoi(strNum);
				calcBox->Clear();
				hist = CalculatorProcessor::GetInstance().ResultadoInt(num, num2, symbol);
				*calcBox << "=" << hist;
				equation = true;
				break;
			}
		}
	}

}


Main::~Main()
{
	delete calcBox;
	delete opBox;
	
	delete[] FctBtns;
	delete[] btns;
}