#include "TestCase.h"
#include <iostream>
#include <vector>
#include <windows.h>
class UnitTest
{
public:
	static UnitTest* GetInstance();
	TestCase* RegisterTestCase(TestCase* testcase);

	int Run();
	TestCase* CurrentTestCase;
	int nTestResult;
	int nPassed;
	int nFailed;
protected:
	std::vector<TestCase*> testcase_;
};