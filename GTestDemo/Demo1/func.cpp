#include "func.h"
int add(int a, int b)
{
	return a+b;
}

int FooCalc::Calc(int a, int b)
{
	return a + b;
}

void FooCalc::Init()
{
	std::cout << "INIT" << std::endl;
}

void FooCalc::Finalize()
{
	std::cout << "FINALIZE" << std::endl;
}
