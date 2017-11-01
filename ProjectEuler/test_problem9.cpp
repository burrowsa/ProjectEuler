#include "gtest/gtest.h"
#include "problem9.h"

static_assert(problem9(3u + 4u + 5u) == 3u * 4u * 5u, "problem9(3 + 4 + 5) should be 3 * 4 * 5");

namespace
{
	TEST(Problem9Tests, TestProblem9)
	{
		EXPECT_EQ(31875000u, problem9(1000u));
	}
}
