#pragma once
#include<array>

constexpr auto problem9(unsigned sm) noexcept
{
	for (unsigned c = sm-2; c > 0; c--)
	{
		for (unsigned b = c - 1; b > 0; b--)
		{
			for (unsigned a = b - 1; a > 0; a--)
			{
				if ((a + b + c == sm) && (a*a + b*b == c*c))
				{
					return a*b*c;
				}
			}
		}
	}
	return 0u;
}
