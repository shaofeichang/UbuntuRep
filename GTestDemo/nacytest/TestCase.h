class TestCase
{
public:
	TestCase(const char* case_name) :testcase_name(case_name) {};

	virtual void Run() = 0;

	int nTestResult;

	const char* testcase_name;
};