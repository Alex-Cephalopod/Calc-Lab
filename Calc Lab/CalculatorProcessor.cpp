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
	case '%':
		return a % b;
	}
}

int CalculatorProcessor::NegarNumero(int a)
{
	return a * (-1);
}
