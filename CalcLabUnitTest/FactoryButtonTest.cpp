#include "CppUnitTest.h"
#include "../Calc Lab/Factory_Button.h"
#include "wx\wx.h"
#include <iostream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FactoryButtonTest
{
	TEST_CLASS(BtnFctryTest)
	{
	public:

		wxFrame* frm = new wxFrame(nullptr, wxID_ANY, "Tester", wxPoint(200, 200), wxSize(400, 670));
		wxButton** btns;
		Factory_Button obj;

		TEST_METHOD(CreateButton1)
		{
			wxWindowID test = 1;
			wxButton* One = obj.CreateNumberButtons(frm, 1);
			wxWindowID id = One->GetId();

			Assert::AreEqual(test, id);
		}

		TEST_METHOD(CreateButton2)
		{
			wxWindowID test = 2;
			wxButton* One = obj.CreateNumberButtons(frm, 2);
			wxWindowID id = One->GetId();

			Assert::AreEqual(test, id);
		}

		TEST_METHOD(CreateButton3)
		{
			wxWindowID test = 3;
			wxButton* One = obj.CreateNumberButtons(frm, 3);
			wxWindowID id = One->GetId();

			Assert::AreEqual(test, id);
		}

		TEST_METHOD(CreateButton4)
		{
			wxWindowID test = 4;
			wxButton* One = obj.CreateNumberButtons(frm, 4);
			wxWindowID id = One->GetId();

			Assert::AreEqual(test, id);
		}

		TEST_METHOD(CreateButton5)
		{
			wxWindowID test = 5;
			wxButton* One = obj.CreateNumberButtons(frm, 5);
			wxWindowID id = One->GetId();

			Assert::AreEqual(test, id);
		}

		TEST_METHOD(CreateButton6)
		{
			wxWindowID test = 6;
			wxButton* One = obj.CreateNumberButtons(frm, 6);
			wxWindowID id = One->GetId();

			Assert::AreEqual(test, id);
		}

		TEST_METHOD(CreateButton7)
		{
			wxWindowID test = 7;
			wxButton* One = obj.CreateNumberButtons(frm, 7);
			wxWindowID id = One->GetId();

			Assert::AreEqual(test, id);
		}

		TEST_METHOD(CreateButton8)
		{
			wxWindowID test = 8;
			wxButton* One = obj.CreateNumberButtons(frm, 8);
			wxWindowID id = One->GetId();

			Assert::AreEqual(test, id);
		}

		TEST_METHOD(CreateButton9)
		{
			wxWindowID test = 9;
			wxButton* One = obj.CreateNumberButtons(frm, 9);
			wxWindowID id = One->GetId();

			Assert::AreEqual(test, id);
		}

		TEST_METHOD(CreateFunctionButtons)
		{
			btns = new wxButton * [11];

			for (int i = 0; i < 11; i++)
			{
				btns[i] = obj.CreateFunctionButtons(frm, i + 10);
			}

			Assert::IsNotNull(btns);
		}

	};
}