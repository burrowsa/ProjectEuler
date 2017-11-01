#include "gtest/gtest.h"
#include "problem21.h"

static_assert(sumOfProperDivisors(220) == 284, "sumOfProperDivisors(220) == 284");
static_assert(sumOfProperDivisors(284) == 220, "sumOfProperDivisors(284) == 220");
static_assert(problem21(300) == 504, "problem21(300) == 504");

namespace
{
	TEST(Problem21Tests, TestProblem21)
	{
		EXPECT_EQ(31626, problem21(10000));
	}
}
