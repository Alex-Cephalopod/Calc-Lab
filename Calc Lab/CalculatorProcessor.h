#pragma once
class CalculatorProcessor
{
public:
	static CalculatorProcessor& GetInsance();

private:
	CalculatorProcessor() = default;

	CalculatorProcessor(const CalculatorProcessor&) = delete;
	CalculatorProcessor& operator=(const CalculatorProcessor&) = delete;
	CalculatorProcessor(CalculatorProcessor&&) = delete;
	CalculatorProcessor& operator=(CalculatorProcessor&&) = delete;
};

