#pragma once

template<class T>
constexpr T sumOfProperDivisors(const T n) noexcept
{
	T sum = 1; // always a factor
	for (T i = 2; (i*i) <= n; i++)
	{
		if ((n % i) == 0) {
			sum += i;
			if (i != (n / i))
			{
				sum += (n / i);
			}
		}
	}
	return sum;
}

template<class T=unsigned>
constexpr auto problem21(const T& mx) noexcept
{
	T sum = 0;
	for (T a1 = 2; a1 < mx; a1++)
	{
		auto a2 = sumOfProperDivisors(a1);
		if ((a2 > a1) && (a2 < mx))
		{
			auto check = sumOfProperDivisors(a2);
			if (a1 == check)
			{
				sum += a1 + a2;
			}
		}
	}
	return sum;
}
