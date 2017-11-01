#include "gtest/gtest.h"
#include "problem20.h"

static_assert(problem20<10, 10>() == 27u, "problem20<10, 10>() == 27");
static_assert(problem20<100, 160>() == 648u, "problem20<100, 160>() == 648");

namespace
{
	TEST(Problem20Tests, TestProblem20)
	{
		const auto result = problem20<100, 160>();
		EXPECT_EQ(648u, result);
	}
}
