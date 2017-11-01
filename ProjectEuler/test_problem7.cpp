#include "gtest/gtest.h"
#include "problem7.h"

// Show that nthPrime works and runs at compile time
static_assert(nthPrime(0) == 0ull, "nthPrime(0) should be 0");
static_assert(nthPrime(1) == 2ull, "nthPrime(1) should be 2");
static_assert(nthPrime(2) == 3ull, "nthPrime(2) should be 3");
static_assert(nthPrime(3) == 5ull, "nthPrime(3) should be 5");
static_assert(nthPrime(4) == 7ull, "nthPrime(4) should be 7");
static_assert(nthPrime(5) == 11ull, "nthPrime(5) should be 11");
static_assert(nthPrime(6) == 13ull, "nthPrime(6) should be 13");
static_assert(nthPrime(7) == 17ull, "nthPrime(7) should be 17");
static_assert(nthPrime(8) == 19ull, "nthPrime(8) should be 19");
static_assert(nthPrime(9) == 23ull, "nthPrime(9) should be 23");
static_assert(nthPrime(10) == 29ull, "nthPrime(10) should be 29");

namespace
{
	TEST(Problem7Tests, TestProblem7)
	{
		EXPECT_EQ(104743ull, nthPrime(10001));
	}
}
