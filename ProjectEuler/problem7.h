#pragma once
#include "primes.h"

template<class T>
constexpr auto nthPrime(const T& n) noexcept
{
	if (n < 1)
	{
		return 0;
	}
	T prime = 2;
	T p = 1;
	for(T i = 3; p < n; i += 2)
	{
		if (isPrime(i))
		{
			prime = i;
			p++;
		}
	}
	return prime;
}
