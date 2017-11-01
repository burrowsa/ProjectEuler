#pragma once
#include "util.h"

template<class T>
constexpr auto isPalindrome(const T& n) noexcept
{
	if (n < 1)
	{
		return false;
	}
	const auto length = mylog10(n) + 1;
	T reversed = 0;
	for (T i = 0; i < length; i++)
	{
		reversed += ((n / mypow(static_cast<T>(10), i)) % 10) * mypow(static_cast<T>(10), length - i - 1);
	}
	return n == reversed;
}

template<class T>
constexpr auto getLargestPalindromeProducts(const T& digits) noexcept
{
	T best = 0;
	const auto min = mypow(static_cast<T>(10), digits - 1);
	const auto max = mypow(static_cast<T>(10), digits) - 1;
	for (auto i = max; i >= min; i--)
	{
		for (auto j = i; j >= min; j--)
		{
			const auto product = i * j;
			if (product <= best)
			{
				break;
			}
			else if (isPalindrome(product) && (product > best))
			{
				best = product;
			}
		}
	}
	return best;
}
