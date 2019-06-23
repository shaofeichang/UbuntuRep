#include "UnitTest.h"

UnitTest* UnitTest::GetInstance()
{
	static UnitTest instance;
	return &instance;
}

TestCase* UnitTest::RegisterTestCase(TestCase* testcase)
{
	testcase_.push_back(testcase);
	return testcase;

}

int UnitTest::Run()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	std::cout << "Run TestCase "<< std::endl;
	std::cout << "==============================================" << std::endl << std::endl;
	
	nTestResult = 1;
	for (std::vector<TestCase*>::iterator it = testcase_.begin(); it!=testcase_.end(); ++it)
	{
		TestCase* testcase = *it;
		CurrentTestCase = testcase;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		std::cout << "==============================" << std::endl;
		std::cout << "Run TestCase: " << testcase->testcase_name << std::endl;
		testcase->Run();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		std::cout << "End TestCase: " << testcase->testcase_name << std::endl;
		if (testcase->nTestResult)
		{
			nPassed++;
		}
		else
		{
			nFailed++;
			nTestResult = 0;
		}
		std::cout << std::endl;	
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	std::cout << "==============================================" << std::endl;
	std::cout << "End TestCase " << std::endl;
	std::cout << "Total TestCase: " << nPassed + nFailed << std::endl;
	std::cout << "Passed: " << nPassed << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	std::cout << "Failed: " << nFailed << std::endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
	return 0;
}
