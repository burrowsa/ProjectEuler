#pragma once
#include "problem4.h"

template<class T>
constexpr auto binaryAsDecimal(T n) noexcept
{
	T result = 0;
	for (T i = 0; n > 0; n >>= 1, i++)
	{
		result += (n % 2) * mypow(static_cast<T>(10), i);
	}
	return result;
}

template<class T>
constexpr auto problem36(const T& mx) noexcept
{
	T sum = 1 ? (mx > 0) : 0;
	for (T i = 3; i < mx; i+=2)
	{
		if (isPalindrome(i))
		{
			const auto b = binaryAsDecimal(i);
			if (isPalindrome(b))
			{
				sum += i;
			}
		}
	}
	return sum;
}
