#include "gtest/gtest.h"
#include "primes.h"

// Show we get the correct number of factors for the early triangular numbers
static_assert(getNumFactors(1) == 1, "getNumFactors(1) should be 1");
static_assert(getNumFactors(2) == 2, "getNumFactors(3) should be 2");
static_assert(getNumFactors(6) == 4, "getNumFactors(6) should be 4");
static_assert(getNumFactors(10) == 4, "getNumFactors(10) should be 4");
static_assert(getNumFactors(15) == 4, "getNumFactors(15) should be 4");
static_assert(getNumFactors(21) == 4, "getNumFactors(21) should be 4");
static_assert(getNumFactors(28) == 6, "getNumFactors(28) should be 6");

// Try a square and a cube too
static_assert(getNumFactors(9) == 3, "getNumFactors(9) should be 3");
static_assert(getNumFactors(81) == 5, "getNumFactors(81) should be 5");

// Show that isPrime works at compile time
static_assert(isPrime(2), "2 is prime");
static_assert(isPrime(3), "3 is prime");
static_assert(isPrime(5), "5 is prime");
static_assert(isPrime(7), "7 is prime");
static_assert(!isPrime(0), "0 is not prime");
static_assert(!isPrime(1), "1 is not prime");
static_assert(!isPrime(4), "4 is not prime");
static_assert(!isPrime(6), "6 is not prime");
static_assert(!isPrime(8), "8 is not prime");
static_assert(!isPrime(9), "9 is not prime");
static_assert(!isPrime(10), "10 is not prime");

namespace {
	TEST(PrimesTests, TestGetPotentiallyPrimeFactors1)
	{
		auto factors = getPotentiallyPrimeFactors(1);
		const decltype(factors) expected{ 1 };
		EXPECT_EQ(expected, factors);
	}

	TEST(PrimesTests, TestGetPotentiallyPrimeFactors2)
	{
		auto factors = getPotentiallyPrimeFactors(2);
		const decltype(factors) expected{ 1, 2 };
		EXPECT_EQ(expected, factors);
	}

	TEST(PrimesTests, TestGetPotentiallyPrimeFactors6)
	{
		auto factors = getPotentiallyPrimeFactors(6);
		const decltype(factors) expected{ 1,2,3,6 };
		EXPECT_EQ(expected, factors);
	}

	TEST(PrimesTests, TestGetPotentiallyPrimeFactors18)
	{
		auto factors = getPotentiallyPrimeFactors(18);
		const decltype(factors) expected{ 1,2,3,6,9,18 };
		EXPECT_EQ(expected, factors);
	}
}
