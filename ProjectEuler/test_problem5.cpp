#include "gtest/gtest.h"
#include "problem5.h"

namespace
{
	TEST(Problem5Tests, TestProblem5)
	{
		EXPECT_EQ(2520u, problem5(10));
		EXPECT_EQ(232792560u, problem5(20));
	}
}
