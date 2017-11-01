#include "gtest/gtest.h"
#include "problem1.h"

// Some static asserts to functions work and are actually constexpr
static_assert(sum_of_multiples(15, 10) == 0, "sum_of_multiples(15, 10) should be 0");
static_assert(sum_of_multiples(3, 10) == 18, "sum_of_multiples(3, 10) should be 18");
static_assert(sum_of_multiples(5, 10) == 5, "sum_of_multiples(5, 10) should be 5");
static_assert(problem1_analytic(3, 5, 10) == 23, "problem1_analytic(3, 5, 10) should be 23");
static_assert(problem1_numeric(3, 5, 10) == 23, "problem1_brute(3, 5, 10) should be 23");

namespace
{
	TEST(Problem1Tests, TestProblem1Analytic)
	{
		EXPECT_EQ(233168, problem1_analytic(3, 5, 1000));
	}

	TEST(Problem1Tests, TestProblem1Numeric)
	{
		EXPECT_EQ(233168, problem1_numeric(3, 5, 1000));
	}
}
