#include "gtest/gtest.h"
#include "problem31.h"

static_assert(problem31<0>() == 1, "problem31<0>() == 1"); // 0
static_assert(problem31<1>() == 1, "problem31<1>() == 1"); // 1
static_assert(problem31<2>() == 2, "problem31<2>() == 2"); // 2 11
static_assert(problem31<5>() == 4, "problem31<5>() == 4"); // 5 221 221 11111

static_assert(problem31<200>() == 73682, "problem31<200>() == 73682");

namespace
{
	TEST(Problem31Tests, TestProblem31)
	{
		EXPECT_EQ(73682u, problem31<200>());
	}
}
