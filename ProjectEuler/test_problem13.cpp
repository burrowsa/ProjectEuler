#include "gtest/gtest.h"
#include "problem13.h"

constexpr BigNumbers<4, 3> testNums = {
	1,2,3,
	4,5,6,
	3,4,4,
	4,4,5,
};

static_assert((123ull + 456ull + 344ull + 445ull) == firstNDigitsOfSum(testNums, 4), "wrong");
static_assert(((123ull + 456ull + 344ull + 445ull) / 10ull) == firstNDigitsOfSum(testNums, 3), "wrong");
static_assert(((123ull + 456ull + 344ull + 445ull) / 100ull) == firstNDigitsOfSum(testNums, 2), "wrong");
static_assert(((123ull + 456ull + 344ull + 445ull) / 1000ull) == firstNDigitsOfSum(testNums, 1), "wrong");
static_assert(0ull == firstNDigitsOfSum(testNums, 0), "wrong");

static_assert(problem13() == 5537376230ull, "problem13() should be 5537376230");

namespace
{
	TEST(Problem13Tests, TestProblem13)
	{
		EXPECT_EQ(5537376230ull, problem13());
	}
}
