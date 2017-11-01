#include "gtest/gtest.h"
#include "problem12.h"

// Show that we can calculate getFirstTriangularNumberWithMoreThanDivisors for a small number of factors at compile time
static_assert(getFirstTriangularNumberWithMoreThanDivisors(5u) == 28u, "getFirstTriangularNumberWithMoreThanDivisors(5) should be 28");

namespace
{
	TEST(Problem12Tests, TestProblem12)
	{
		EXPECT_EQ(76576500ull,
			getFirstTriangularNumberWithMoreThanDivisors(500ull));
	}
}
