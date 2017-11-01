#pragma once

constexpr unsigned squareOfSum(unsigned n) noexcept
{
	const auto sm = n*(n + 1) / 2;
	return sm * sm;
}

constexpr unsigned sumOfSquares(unsigned n) noexcept
{
	unsigned sm = 0;
	for (unsigned i = 0; i <= n; i++)
	{
		sm += i*i;
	}
	return sm;
}

constexpr unsigned problem6(unsigned n) noexcept
{
	return squareOfSum(n) - sumOfSquares(n);
}
