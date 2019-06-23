#include "gtest//gtest.h"
#include "func.h"
//ȫ���¼�
class FooEnvironment :public testing::Environment
{
public:
	virtual void SetUp()
	{
		std::cout << "Foo FooEnvironment SetUp" << std::endl;
	}
	virtual void TearDown()
	{
		std::cout << "Fool FooEnvironment TearDown " << std::endl;
	}
};
//TestSuite�¼�
class SetUpTestCaseTest : public testing::Test {
protected:
	// This will be called once before the first test in this test case
	// is run.
	static void SetUpTestCase() {
		printf("Setting up the test case . . .\n");

		// Initializes some shared resource.  In this simple example, we
		// just create a C string.  More complex stuff can be done if
		// desired.
		shared_resource_ = "123";

		// Increments the number of test cases that have been set up.
		counter_++;

		// SetUpTestCase() should be called only once.
		EXPECT_EQ(1, counter_);
	}

	// This will be called once after the last test in this test case is
	// run.
	static void TearDownTestCase() {
		printf("Tearing down the test case . . .\n");

		// Decrements the number of test cases that have been set up.
		counter_--;

		// TearDownTestCase() should be called only once.
		EXPECT_EQ(0, counter_);

		// Cleans up the shared resource.
		shared_resource_ = nullptr;
	}

	// This will be called before each test in this test case.
	void SetUp() override {
		// SetUpTestCase() should be called only once, so counter_ should
		// always be 1.
		EXPECT_EQ(1, counter_);
	}

	// Number of test cases that have been set up.
	static int counter_;

	// Some resource to be shared by all tests in this test case.
	static const char* shared_resource_;
};

int SetUpTestCaseTest::counter_ = 0;
const char* SetUpTestCaseTest::shared_resource_ = nullptr;

// A test that uses the shared resource.
TEST_F(SetUpTestCaseTest, Test1) { EXPECT_STRNE(nullptr, shared_resource_); }

// Another test that uses the shared resource.
TEST_F(SetUpTestCaseTest, Test2) {
	EXPECT_STREQ("123", shared_resource_);
}

//TestCase�¼�
class FooCalcTest :public testing::Test {
protected:
	virtual void SetUp() {
		m_foo.Init();
	}
	virtual void TearDown() {
		m_foo.Finalize();
	}
	FooCalc m_foo;
};
TEST_F(FooCalcTest, HandleNoneZeroInput)
{
	EXPECT_EQ(4, m_foo.Calc(2, 2));
}

TEST_F(FooCalcTest, HandleNoneZeroInput_Error)
{
	EXPECT_EQ(5, m_foo.Calc(2, 3));
}
TEST(TestCase0, TestName0) {
	EXPECT_EQ(2, add(1, 1));
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}
TEST(TestCase1, TestName1) {
	EXPECT_EQ(3, add(1, 2));
}
TEST(TestCase2, TestName2) {
	//�������
	ASSERT_TRUE(1);			EXPECT_TRUE(1);
	ASSERT_FALSE(0);		EXPECT_FALSE(0);
	//��ֵ�����ݼ��
	ASSERT_EQ(1, 1);		EXPECT_EQ(1, 1);
	ASSERT_NE(1, 2);		EXPECT_NE(1, 0);
	ASSERT_LE(1, 1);		EXPECT_LE(1, 1);
	ASSERT_LT(-1, 0);		EXPECT_LT(1, 2);
	ASSERT_GT(2, 1);		EXPECT_GT(2, 1);
	ASSERT_GE(2, 2);		EXPECT_GE(3, 1);
	//�ַ������
	ASSERT_STREQ("STR1", "STR1"); EXPECT_STREQ("STR1", "STR1");
	ASSERT_STRNE("STR1", "STR2"); EXPECT_STRNE("STR1", "STR2");
	ASSERT_STRCASEEQ("STR1", "STR1"); EXPECT_STRCASEEQ("STR1", "str1"); //the two string have the same content ,ignoring case
	ASSERT_STRCASENE("STR1", "STR2"); EXPECT_STRCASENE("STR1", "STR2");

}
int main(int argc, char **argv)
{
	testing::AddGlobalTestEnvironment(new FooEnvironment);
	testing::GTEST_FLAG(output) = "xml:";
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}