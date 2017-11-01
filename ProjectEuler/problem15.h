#pragma once
#include <array>

template<unsigned C>
constexpr unsigned long long paths(const unsigned i, const unsigned j, std::array<std::array<unsigned long long, C>, C> const& cache, const unsigned c) noexcept
{
	if ((i == 0) && (j == 0))
	{
		return 0;
	}
	else if ((i == 0) || (j == 0))
	{
		return 1;
	}
	else if ((i < c) && (j < c))
	{
		return cache[i][j];
	}
	else if (i == j)
	{
		return 2 * paths(i, i - 1, cache, c);
	}
	else
	{
		return paths(i - 1, j, cache, c) + paths(i, j - 1, cache, c);
	}
}

constexpr auto nocache = std::array<std::array<unsigned long long, 0>, 0>();

template<unsigned I, unsigned J>
constexpr auto paths() noexcept
{
	return paths(I, J, nocache, 0);
}

template<unsigned N>
auto problem15() noexcept
{
	auto cache = std::array<std::array<unsigned long long, N + 1>, N + 1>();
	for (unsigned i = 0; i < N + 1; i++)
	{
		for (unsigned j = i; j < N + 1; j++)
		{
			cache[i][j] = paths(i, j, cache, i);
			cache[j][i] = cache[i][j];
		}
	}
	return cache[N][N];
}
