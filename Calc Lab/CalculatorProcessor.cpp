#include "CalculatorProcessor.h"

CalculatorProcessor& CalculatorProcessor::GetInsance()
{
	static CalculatorProcessor* singleton = new CalculatorProcessor();
	return *singleton;
}
