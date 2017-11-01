#pragma once
#include "util.h"

template<unsigned X, unsigned Y, size_t N>
constexpr unsigned problem16() noexcept
{
	unsigned x[N] = {};
	for (size_t i = 0; i < N; i++)
	{
		x[i] = 0u;
	}

	x[N-1] = 1u;
	for (size_t i = 0; i < Y; i++)
	{
		multiply<decltype(x), N>(x, X);
	}

	unsigned total = 0;
	for (size_t i = 0; i < N; i++)
	{
		total += x[i];
	}
	return total;
}
