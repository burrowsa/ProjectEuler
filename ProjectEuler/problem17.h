#pragma once
#include <array>

#define NUMBER(I) constexpr auto I = sizeof(""#I"") - 1;

NUMBER(zero)
NUMBER(one)
NUMBER(two)
NUMBER(three)
NUMBER(four)
NUMBER(five)
NUMBER(six)
NUMBER(seven)
NUMBER(eight)
NUMBER(nine)
NUMBER(ten)
NUMBER(eleven)
NUMBER(twelve)
NUMBER(thirteen)
NUMBER(fourteen)
NUMBER(fifteen)
NUMBER(sixteen)
NUMBER(seventeen)
NUMBER(eighteen)
NUMBER(nineteen)
NUMBER(twenty)

NUMBER(thirty)
NUMBER(forty)
NUMBER(fifty)
NUMBER(sixty)
NUMBER(seventy)
NUMBER(eighty)
NUMBER(ninety)

NUMBER(hundred)
NUMBER(thousand)
NUMBER(and)

constexpr std::array<unsigned, 20> underTwenty = {
	zero, one, two, three, four, five, six, seven, eight, nine, ten,
	eleven, twelve, thirteen, fourteen, fifteen, sixteen, seventeen,
	eighteen, nineteen
};

constexpr std::array<unsigned, 10> tens = {
	zero, ten, twenty, thirty, forty, fifty, sixty, seventy, eighty, ninety
};

template<class T>
constexpr T countLetters(const T& i) noexcept
{
	if (i > 999u)
	{
		const auto t = i / 1000u;
		const auto o = i % 1000u;
		if (o == 0u)
		{
			return countLetters(t) + thousand;
		}
		else if (o > 99u)
		{
			return countLetters(t) + thousand + countLetters(o);
		}
		else
		{
			return countLetters(t) + thousand + and + countLetters(o);
		}
	}
	else if (i > 99u)
	{
		const auto h = i / 100u;
		const auto o = i % 100u;
		if (o == 0u)
		{
			return countLetters(h) + hundred;
		}
		else
		{
			return countLetters(h) + hundred + and + countLetters(o);
		}
	}
	else if (i >= 20u)
	{
		const auto t = i / 10u;
		const auto o = i % 10u;
		if (o == 0u)
		{
			return tens[t];
		}
		else
		{
			return tens[t] + underTwenty[o];
		}
	}
	else
	{
		return underTwenty[i];
	}
}

template<class T>
constexpr auto problem17(const T& mx = 1000u) noexcept
{
	T total = 0;
	for (T i = 1; i <= mx; i++)
	{
		total += countLetters(i);
	}
	return total;
}
