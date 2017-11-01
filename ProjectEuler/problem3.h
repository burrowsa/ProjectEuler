#pragma once
#include <algorithm>
#include <iterator>
#include "primes.h"

template<class T>
auto getPrimeFactors(const T& n) noexcept
{
	auto factors = getPotentiallyPrimeFactors(n);
	decltype(factors) primeFactors;
	std::copy_if(std::begin(factors),
		std::end(factors),
		std::inserter(primeFactors, std::begin(primeFactors)), 
		[](auto i) { return isPrime(i); });
	return primeFactors;
}
