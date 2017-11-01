#include "gtest/gtest.h"
#include "problem16.h"

static_assert(problem16<2, 0, 10>() == 1u, "wrong");
static_assert(problem16<2, 0, 10>() == 1u, "wrong");
static_assert(problem16<2, 1, 10>() == 2u, "wrong");
static_assert(problem16<2, 2, 10>() == 4u, "wrong");
static_assert(problem16<2, 3, 10>() == 8u, "wrong");
static_assert(problem16<2, 4, 10>() == 7u, "wrong");
static_assert(problem16<2, 5, 10>() == 5u, "wrong");
static_assert(problem16<2, 6, 10>() == 10u, "wrong");
static_assert(problem16<2, 7, 10>() == 11u, "wrong");
static_assert(problem16<2, 8, 10>() == 13u, "wrong");
static_assert(problem16<2, 9, 10>() == 8u, "wrong");
static_assert(problem16<2, 10, 10>() == 7u, "wrong");
static_assert(problem16<2, 11, 10>() == 14u, "wrong");
static_assert(problem16<2, 12, 10>() == 19u, "wrong");
static_assert(problem16<2, 13, 10>() == 20u, "wrong");
static_assert(problem16<2, 14, 10>() == 22u, "wrong");
static_assert(problem16<2, 15, 10>() == 26u, "wrong");

namespace
{
	TEST(Problem16Tests, TestProblem16)
	{
		const auto result = problem16<2, 1000, 350>();
		EXPECT_EQ(1366u, result);
	}
}
