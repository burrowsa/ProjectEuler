#pragma once

constexpr unsigned fib(unsigned n) noexcept
{
	return (n < 2) ? 1 : fib(n - 1) + fib(n - 2);
}

constexpr unsigned sum_of_fib(unsigned max, unsigned a=1) noexcept
{
	unsigned total = 0;
	for (unsigned i = 0; ; i++)
	{
		const unsigned f = fib(i);
		if (f>=max)
		{
			break;
		}
		else if ((f % a) == 0)
		{
			total += f;
		}
	}
	return total;
}

constexpr unsigned sum_of_fib2(unsigned max, unsigned a = 1) noexcept
{
	unsigned total = 0;
	unsigned prev1 = 0;
	unsigned prev2 = 1;
	while(true)
	{
		const unsigned f = prev1 + prev2;
		prev2 = prev1;
		prev1 = f;
		if (f >= max)
		{
			break;
		}
		else if ((f % a) == 0)
		{
			total += f;
		}
	}
	return total;
}
