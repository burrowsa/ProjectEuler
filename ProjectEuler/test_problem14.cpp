#include "gtest/gtest.h"
#include "problem14.h"

static_assert(collatzLength(1) == 1, "collatzLength(0) should be 0");
static_assert(collatzLength(13) == 10, "collatzLength(13) should be 10");
static_assert(problem14(100) == 97, "problem14(100) should be 97");

namespace
{
	TEST(Problem14Tests, TestProblem14)
	{
		EXPECT_EQ(837799u, problem14<unsigned long long>());
	}
}
