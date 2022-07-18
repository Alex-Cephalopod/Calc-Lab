#include "App.h"

wxIMPLEMENT_APP(App);

App::App()
{

}

App::~App()
{
	calcFrame;
}

bool App::OnInit()
{
	calcFrame = new Main();
	calcFrame->Show();
	return true;
}

