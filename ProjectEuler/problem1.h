#pragma once

template<class T>
constexpr auto problem1_numeric(const T& a1, const T& a2, const T& max) noexcept
{
	T total = 0;
	for (int i = 0; i < max; i++)
	{
		if ((i % a1 == 0) || (i % a2 == 0))
		{
			total += i;
		}
	}
	return total;
}

template<class T>
constexpr auto sum_of_multiples(const T& a, const T& max) noexcept
{
	const T n = (max - 1) / a;
	const T l = n * a;
	return (a + l) * n / 2;
}

template<class T>
constexpr auto problem1_analytic(const T& a1, const T& a2, const T& max) noexcept
{
	return sum_of_multiples(a1, max) + sum_of_multiples(a2, max) - sum_of_multiples(a1*a2, max);
}
