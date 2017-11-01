#include "gtest/gtest.h"
#include "problem11.h"

constexpr Grid<4, 4> testGrid = {
 	 1,  2,  3,  4,
	 5,  6,  7,  8,
	 9, 10, 11, 12,
	13, 14, 15, 16
};

static_assert(horizontal(testGrid, 0, 0) == 1 * 2 * 3 * 4, "wrong");
static_assert(vertical(testGrid, 0, 0) == 1 * 5 * 9 * 13, "wrong");
static_assert(diagonal1(testGrid, 0, 0) == 1 * 6 * 11 * 16, "wrong");
static_assert(diagonal2(testGrid, 0, 3) == 4 * 7 * 10 * 13, "wrong");

static_assert(horizontal(testGrid, 0, 1) == 0, "wrong");
static_assert(vertical(testGrid, 1, 0) == 0, "wrong");
static_assert(diagonal1(testGrid, 1, 0) == 0, "wrong");
static_assert(diagonal2(testGrid, 1, 3) == 0, "wrong");

static_assert(problem11(testGrid) == 13 * 14 * 15 * 16, "wrong");
static_assert(problem11() == 70600674, "wrong");

namespace
{
	TEST(Problem11Tests, TestProblem11)
	{
		EXPECT_EQ(70600674u, problem11());
	}
}
