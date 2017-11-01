#pragma once
#include "primes.h"

template<class T>
constexpr T sumOfPrimesBelow(const T& mx) noexcept
{
	if (mx < 3)
	{
		return 0;
	}
	T sum = 2;
	for (T i = 3; i < mx; i += 2)
	{
		if (isPrime(i))
		{
			sum += i;
		}
	}
	return sum;
}
