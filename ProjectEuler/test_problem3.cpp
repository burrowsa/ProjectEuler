#include "gtest/gtest.h"
#include "problem3.h"

namespace
{
	TEST(Problem3Tests, TestGetPrimeFactors1)
	{
		auto factors = getPrimeFactors(1);
		const decltype(factors) expected{};
		EXPECT_EQ(expected, factors);
	}

	TEST(Problem3Tests, TestGetPrimeFactors2)
	{
		auto factors = getPrimeFactors(2);
		const decltype(factors) expected{ 2 };
		EXPECT_EQ(expected, factors);
	}

	TEST(Problem3Tests, TestGetPrimeFactors6)
	{
		auto factors = getPrimeFactors(6);
		const decltype(factors) expected{ 2,3 };
		EXPECT_EQ(expected, factors);
	}

	TEST(Problem3Tests, TestGetPrimeFactors18)
	{
		auto factors = getPrimeFactors(18);
		const decltype(factors) expected{ 2,3 };
		EXPECT_EQ(expected, factors);
	}

	TEST(Problem3Tests, TestGetPrimeFactors13195)
	{
		auto factors = getPrimeFactors(13195);
		const decltype(factors) expected{ 5,7,13,29 };
		EXPECT_EQ(expected, factors);
	}

	TEST(Problem3Tests, TestProblem3)
	{
		auto factors = getPrimeFactors(600851475143);
		const decltype(factors) expected{ 71,839,1471,6857 };
		EXPECT_EQ(expected, factors);
	}
}
