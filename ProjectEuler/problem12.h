#pragma once
#include "primes.h"

template<class T>
constexpr auto getFirstTriangularNumberWithMoreThanDivisors(const T& numDivisors) noexcept
{
	for (T i = 0;; i++)
	{
		const auto t = (i*(i + 1)) / 2;
		if (getNumFactors(t) > numDivisors) {
			return t;
		}
	}
}
