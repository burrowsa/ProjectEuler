#include "gtest/gtest.h"
#include "problem6.h"

// Check that the code runs at compile time
static_assert(squareOfSum(10) == 3025u, "squareOfSum(10) should be 3025u");
static_assert(sumOfSquares(10) == 385u, "sumOfSquares(10) should be 385u");
static_assert(problem6(10) == 2640u, "problem6(10) should be 2640u");
static_assert(problem6(100) == 25164150u, "problem6(100) should be 25164150u");

namespace
{
	TEST(Problem6Tests, TestProblem6)
	{
		EXPECT_EQ(25164150u, problem6(100));
	}
}
