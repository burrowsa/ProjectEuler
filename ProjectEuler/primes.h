#pragma once
#include <set>

template<class T>
auto getPotentiallyPrimeFactors(const T& n) noexcept
{
	std::set<T> factors;
	for (T i = 1; (i*i) <= n; i += (i < 3 ? 1 : 2))
	{
		if ((n % i) == 0) {
			factors.insert(i);
			factors.insert(n / i);
		}
	}
	return factors;
}

template<class T>
constexpr auto getNumFactors(const T& n) noexcept
{
	size_t factors = 0;
	for (T i = 1; (i*i) <= n; i++)
	{
		if ((n % i) == 0) {
			factors += (i == (n / i)) ? 1 : 2;
		}
	}
	return factors;
}

template<class T>
constexpr auto isPrime(const T& n) noexcept
{
	if (n < 2)
	{
		return false;
	}
	for (T i = 2; (i*i) <= n; i += (i < 3 ? 1 : 2))
	{
		if ((n % i) == 0) {
			return false;
		}
	}
	return true;
}
