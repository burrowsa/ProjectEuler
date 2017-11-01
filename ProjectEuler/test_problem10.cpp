#include "gtest/gtest.h"
#include "problem10.h"

static_assert(sumOfPrimesBelow(0) == 0ull, "sumOfPrimesBelow(0) should be 0");
static_assert(sumOfPrimesBelow(1) == 0ull, "sumOfPrimesBelow(1) should be 0");
static_assert(sumOfPrimesBelow(2) == 0ull, "sumOfPrimesBelow(2) should be 0");
static_assert(sumOfPrimesBelow(3) == 2ull, "sumOfPrimesBelow(3) should be 2");
static_assert(sumOfPrimesBelow(4) == 5ull, "sumOfPrimesBelow(4) should be 5");
static_assert(sumOfPrimesBelow(5) == 5ull, "sumOfPrimesBelow(5) should be 5");
static_assert(sumOfPrimesBelow(6) == 10ull, "sumOfPrimesBelow(6) should be 10");
static_assert(sumOfPrimesBelow(7) == 10ull, "sumOfPrimesBelow(7) should be 10");
static_assert(sumOfPrimesBelow(8) == 17ull, "sumOfPrimesBelow(8) should be 17");
static_assert(sumOfPrimesBelow(9) == 17ull, "sumOfPrimesBelow(9) should be 17");
static_assert(sumOfPrimesBelow(10) == 17ull, "sumOfPrimesBelow(10) should be 17");

namespace
{
	TEST(Problem10Tests, TestProblem10)
	{
		EXPECT_EQ(142913828922ull, sumOfPrimesBelow(2000000ull));
	}
}
