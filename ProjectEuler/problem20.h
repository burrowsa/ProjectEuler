#pragma once
#include "util.h"

template<unsigned X, size_t N>
constexpr unsigned problem20() noexcept
{
	unsigned x[N] = {};
	for (size_t i = 0; i < N; i++)
	{
		x[i] = 0u;
	}

	x[N - 1] = 1u;
	for (int i = 2; i <= X; i++)
	{
		multiply<decltype(x), N>(x, i);
	}

	unsigned total = 0;
	for (size_t i = 0; i < N; i++)
	{
		total += x[i];
	}
	return total;
}
