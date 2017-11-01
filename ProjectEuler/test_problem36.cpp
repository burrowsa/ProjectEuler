#include "gtest/gtest.h"
#include "problem36.h"

static_assert(binaryAsDecimal(0b0) == 0, "binaryAsDecimal(0u) == 0");
static_assert(binaryAsDecimal(0b1) == 1, "binaryAsDecimal(1u) == 1");
static_assert(binaryAsDecimal(0b10) == 10, "binaryAsDecimal(2u) == 10");
static_assert(binaryAsDecimal(0b11) == 11, "binaryAsDecimal(3u) == 11");
static_assert(binaryAsDecimal(0b100) == 100, "binaryAsDecimal(4u) == 100");
static_assert(binaryAsDecimal(0b101) == 101, "binaryAsDecimal(5u) == 101");
static_assert(binaryAsDecimal(0b110) == 110, "binaryAsDecimal(6u) == 110");
static_assert(binaryAsDecimal(0b111) == 111, "binaryAsDecimal(7u) == 111");
static_assert(binaryAsDecimal(0b1000) == 1000, "binaryAsDecimal(8u) == 1000");

/* Small double-base palindromes are:
1u -> 0b1
3u -> 0b11
5u -> 0b101
7u -> 0b111
9u -> 0b1001
33u -> 0b100001
99u -> 0b1100011
*/
static_assert(problem36(10u) == 25u, "problem36(10u) == 25");
static_assert(problem36(33u) == 25u, "problem36(30u) == 25");
static_assert(problem36(34u) == 58u, "problem36(40u) == 58");
static_assert(problem36(99u) == 58u, "problem36(90u) == 58");
static_assert(problem36(100u) == 157u, "problem36(100u) == 157");

namespace
{
	TEST(Problem36Tests, TestProblem36)
	{
		EXPECT_EQ(872187ull, problem36(1000000ull));
	}
}
