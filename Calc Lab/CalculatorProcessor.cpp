#include "CalculatorProcessor.h"

CalculatorProcessor& CalculatorProcessor::GetInsance()
{
	static CalculatorProcessor* singleton = new CalculatorProcessor();
	return *singleton;
}

int CalculatorProcessor::ResultadoInt(int a, int b, char op)
{
	switch (op)
	{
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case '/':
		return a / b;
		break;
		/*try
		{
			return a / b;
		}
		catch ()
		{

		}*/
	case '%':
		return a % b;
	}
}

int CalculatorProcessor::NegarNumero(int a)
{
	return a * (-1);
}

std::string CalculatorProcessor::ToHex(int num)
{
	std::string result = "";

	while (num > 0)
	{
		int remainder = num % 16;

		if (remainder < 10) {
			result = std::to_string(remainder) + result;
		}
		else if (remainder == 10)
		{
			result = "A" + result;
		}
		else if (remainder == 11)
		{
			result = "B" + result;
		}
		else if (remainder == 12)
		{
			result = "C" + result;
		}
		else if (remainder == 13)
		{
			result = "D" + result;
		}
		else if (remainder == 14)
		{
			result = "E" + result;
		}
		else if (remainder == 15)
		{
			result = "F" + result;
		}

		num = num / 16;
	}

	return "0x" + result;
}

std::string CalculatorProcessor::toBin(int num)
{
	std::string result = "";

	for (int i = 0; i < 16; i++)
	{
		result = std::to_string(num % 2) + result;

		num /= 2;
	}

	return result;
}
