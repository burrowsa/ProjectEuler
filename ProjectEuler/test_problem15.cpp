#include "gtest/gtest.h"
#include "problem15.h"

static_assert(paths<1, 1>() == 2, "paths(1, 1) should be 2");
static_assert(paths<1, 2>() == 3, "paths(1, 2) should be 3");
static_assert(paths<2, 1>() == 3, "paths(2, 1) should be 3");
static_assert(paths<2, 2>() == 6, "paths(2, 2) should be 6");

namespace
{
	TEST(Problem15Tests, TestProblem15)
	{
		EXPECT_EQ(6ull, problem15<2>());
		EXPECT_EQ(137846528820ull, problem15<20>());
	}
}
