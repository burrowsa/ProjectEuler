#pragma once

template<class T>
constexpr auto collatzNext(const T& n) noexcept
{
	return ((n % 2) == 0) ? (n / 2) : (3 * n + 1);
}

template<class T>
constexpr auto collatzLength(const T& start) noexcept
{
	T length = 1;
	for (T n = start; n > 1; n = collatzNext(n))
	{
		length++;
	}
	return length;
}

template<class T>
constexpr auto problem14(const T& max=1000000) noexcept
{
	T best_length = 0;
	T best_start = 0;
	for (T i = 0; i < max; i++)
	{
		const auto l = collatzLength(i);
		if (l > best_length)
		{
			best_length = l;
			best_start = i;
		}
	}
	return best_start;
}
