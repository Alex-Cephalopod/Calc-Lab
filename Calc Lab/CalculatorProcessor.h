#pragma once
#include <iostream>
#include <string>

class CalculatorProcessor
{
public:
	static CalculatorProcessor& GetInsance();
	int ResultadoInt(int a, int b, char op);
	int NegarNumero(int a);
	std::string ToHex(int num);
	std::string toBin(int num);

private:
	CalculatorProcessor() = default;

	CalculatorProcessor(const CalculatorProcessor&) = delete;
	CalculatorProcessor& operator=(const CalculatorProcessor&) = delete;
	CalculatorProcessor(CalculatorProcessor&&) = delete;
	CalculatorProcessor& operator=(CalculatorProcessor&&) = delete;
};
