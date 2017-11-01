#pragma once
#include <array>

template<class T>
constexpr auto isLeapYear(const T& year) noexcept
{
	return ((((year % 100) != 0) && ((year % 4) == 0)) || (((year % 100) == 0) && (((year / 100) % 4) == 0)));
}

template<class T>
constexpr auto daysInMonth(const T& year, const T& month) noexcept
{
	if ((month == 9) || (month == 4) || (month == 6) || (month == 11))
	{
		return static_cast<T>(30);
	}
	else if (month != 2)
	{
		return static_cast<T>(31);
	}
	else if (!isLeapYear(year))
	{
		return static_cast<T>(28);
	}
	else
	{
		return static_cast<T>(29);
	}
}

constexpr size_t day = 2;
constexpr size_t month = 1;
constexpr size_t year = 0;

template<class T>
std::array<T, 3> addWeek(std::array<T, 3> date) noexcept
{
	date[day] += 7;
	const auto dim = daysInMonth(date[year], date[month]);

	if (date[day] > dim) {
		date[month]++;
		date[day] -= dim;
	}
	
	if (date[month] > 12)
	{
		date[year]++;
		date[month] = 1;
	}
	
	return date;
}

constexpr std::array<unsigned, 3> start_sunday = { 1901, 1, 6 };

unsigned problem19() noexcept;
