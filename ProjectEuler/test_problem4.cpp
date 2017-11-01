#include "gtest/gtest.h"
#include "problem4.h"

static_assert(isPalindrome(1u),"1 is a palindrome");
static_assert(isPalindrome(66u), "66 is a palindrome");
static_assert(isPalindrome(171u), "171 is a palindrome");
static_assert(isPalindrome(1881u), "1881 is a palindrome");
static_assert(isPalindrome(10201u), "10201 is a palindrome");
static_assert(isPalindrome(1234321u), "1234321 is a palindrome");

static_assert(!isPalindrome(0u), "0 is not a palindrome");
static_assert(!isPalindrome(67u), "67 is not a palindrome");
static_assert(!isPalindrome(172u), "172 is not a palindrome");
static_assert(!isPalindrome(1831u), "1831 is not a palindrome");
static_assert(!isPalindrome(10211u), "10211 is not a palindrome");
static_assert(!isPalindrome(1234311u), "1234311 is not a palindrome");

static_assert(getLargestPalindromeProducts(2u) == 9009u, "getLargestPalindromeProducts(2) should be 9009");

namespace
{
	TEST(Problem4Tests, TestProblem4)
	{
		EXPECT_EQ(906609u, getLargestPalindromeProducts(3u));
	}
}
