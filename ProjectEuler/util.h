#pragma once
#include <cassert>

template<class T>
constexpr T mypow(const T& x, const T& y) noexcept
{
	return y == 0 ? 1 : x * mypow(x, y - 1);
}

template<class T>
constexpr T mylog10(T x) noexcept
{
	T retval = 0;
	while (x)
	{
		x /= 10;
		retval++;
	}
	return retval - 1;
}

template<class T>
constexpr void addDigit(T& result, size_t j, int value) noexcept
{
	result[j] += value;
	if (result[j] >= 10)
	{
		assert(j > 0);
		addDigit(result, j - 1, result[j] / 10);
		result[j] %= 10;
	}
}

template<class T, size_t N>
constexpr void multiply(T& x, const unsigned y) noexcept
{
	for (size_t j = 0; j < N; j++)
	{
		addDigit(x, j, x[j] * (y - 1));
	}
}
