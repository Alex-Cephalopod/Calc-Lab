#include "CppUnitTest.h"
#include "../Calc Lab/CalculatorProcessor.h"
#include <string>
#include <stdexcept>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalcProcessor
{
	TEST_CLASS(CalcLabUnitTest)
	{
	public:

		TEST_METHOD(TestSumTrue)
		{
			int result = CalculatorProcessor::GetInstance().ResultadoInt(2, 2, '+');
			Assert::AreEqual(4, result);
		}

		TEST_METHOD(TestSubTrue)
		{
			int result = CalculatorProcessor::GetInstance().ResultadoInt(2, 2, '-');
			Assert::AreEqual(0, result);
		}

		TEST_METHOD(TestMultTrue)
		{
			int result = CalculatorProcessor::GetInstance().ResultadoInt(2, 4, '*');
			Assert::AreEqual(8, result);
		}

		TEST_METHOD(TestDivTrue)
		{
			int result = CalculatorProcessor::GetInstance().ResultadoInt(3, 3, '/');
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(TestModTrue)
		{
			int result = CalculatorProcessor::GetInstance().ResultadoInt(3, 2, '%');
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(TestNegateNumber)
		{
			int result = CalculatorProcessor::GetInstance().NegarNumero(5);
			Assert::AreEqual(-5, result);
		}

		TEST_METHOD(TestHex)
		{
			std::string str = CalculatorProcessor::GetInstance().ToHex(10);
			bool result = str.compare("A");
			Assert::IsTrue(result);
		}

		TEST_METHOD(TestBin)
		{
			std::string str = CalculatorProcessor::GetInstance().ToHex(10);
			bool result = str.compare("0000000000001010");
			Assert::IsTrue(result);
		}

		TEST_METHOD(TestSumFalse)
		{
			int result = CalculatorProcessor::GetInstance().ResultadoInt(2, 2, '+');
			Assert::AreNotEqual(5, result);
		}

		TEST_METHOD(TestMult0)
		{
			int result = CalculatorProcessor::GetInstance().ResultadoInt(2, 0, '*');
			Assert::AreEqual(0, result);
		}
	};
}