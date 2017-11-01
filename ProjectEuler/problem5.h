#pragma once
#include <unordered_map>
#include "primes.h"
#include "util.h"

template<class T>
auto problem5(const T& n) noexcept
{
	std::unordered_map<T, T> primeFactors;
	for (T i = 1; i <= n; i++)
	{
		if (isPrime(i))
		{
			primeFactors[i] = 1;
		}
		else
		{
			T q = i;
			for each (auto primeCount in primeFactors)
			{
				T count = 0;
				while ((q % primeCount.first) == 0)
				{
					q /= primeCount.first;
					count++;
				}
				if (count > primeCount.second) {
					primeFactors[primeCount.first] = count;
				}
				if (q == 1)
				{
					break;
				}
			}
		}
	}
	T result = 1;
	for each (auto primeCount in primeFactors)
	{
		result *= mypow(primeCount.first, primeCount.second);
	}

	return result;
}
