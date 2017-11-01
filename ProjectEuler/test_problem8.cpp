#include "gtest/gtest.h"
#include "problem8.h"

static_assert(problem8(4) == 5832ull, "problem8(4) should be 5832");
static_assert(problem8(13) == 23514624000ull, "problem8(13) should be 23514624000");

namespace
{
	TEST(Problem8Tests, TestProblem8)
	{
		EXPECT_EQ(23514624000ull, problem8(13));
	}
}
