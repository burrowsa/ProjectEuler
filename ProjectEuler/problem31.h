#include <array>

// The order of this array does not matter
constexpr unsigned coins[8] = { 200, 100, 50, 20, 10, 5, 2, 1 };

template<unsigned N, class T=unsigned>
constexpr auto problem31() noexcept
{
	T c[N + 1] = {};
	for (T i = 0; i <= N; i++)
	{
		c[i] = 1 ? (i == 0) : 0;
	}

	for each (auto coin in coins)
	{
		for (auto i = coin; i <= N; i++)
		{
			c[i] += c[i - coin];
		}
	}

	return c[N];
}
