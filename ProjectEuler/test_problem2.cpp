#include "gtest/gtest.h"
#include "problem2.h"

// Some static asserts to check fib and sum_of_fib work and are actually constexpr
static_assert(fib(0) == 1, "fib(0) should be 1");
static_assert(fib(1) == 1, "fib(1) should be 1");
static_assert(fib(2) == 2, "fib(2) should be 2");
static_assert(fib(3) == 3, "fib(3) should be 3");

static_assert(sum_of_fib(2) == 2, "sum_of_fib(2) should be 2");
static_assert(sum_of_fib(3) == 4, "sum_of_fib(3) should be 4");
static_assert(sum_of_fib(5) == 7, "sum_of_fib(5) should be 7");
static_assert(sum_of_fib(10, 2) == 10, "sum_of_fib(10, 2) should be 10");
static_assert(sum_of_fib(10, 3) == 3, "sum_of_fib(10, 3) should be 3");
static_assert(sum_of_fib(4000) == 6764u, "sum_of_fib(4000) should be 6764");
static_assert(sum_of_fib(4000, 2) == 3382u, "sum_of_fib(4000, 2) should be 3382");

static_assert(sum_of_fib2(2) == 2, "sum_of_fib2(2) should be 2");
static_assert(sum_of_fib2(3) == 4, "sum_of_fib2(3) should be 4");
static_assert(sum_of_fib2(5) == 7, "sum_of_fib2(5) should be 7");
static_assert(sum_of_fib2(10, 2) == 10, "sum_of_fib2(10, 2) should be 10");
static_assert(sum_of_fib2(10, 3) == 3, "sum_of_fib2(10, 3) should be 3");
static_assert(sum_of_fib2(4000) == 6764u, "sum_of_fib2(4000) should be 6764");
static_assert(sum_of_fib2(4000, 2) == 3382u, "sum_of_fib2(4000, 2) should be 3382");

// Even these can be calculated at compile time as sum_of_fib2 is not recursive
static_assert(sum_of_fib2(4000000) == 9227464u, "sum_of_fib2(4000000) should be 9227464");
static_assert(sum_of_fib2(4000000, 2) == 4613732u, "sum_of_fib2(4000000, 2) should be 4613732");

namespace
{		
	TEST(Problem2Tests, TestProblem2)
	{
		// These can not be calculated at compile time as they are recurse with more than 1000000 steps
		// We could use the /constexpr:steps<NUMBER> compiler flag to give us more steps but the compiler
		// might run out of heap :)
		EXPECT_EQ(9227464u, sum_of_fib(4000000));
		EXPECT_EQ(4613732u, sum_of_fib(4000000, 2));
	}
}
