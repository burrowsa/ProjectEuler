#include "gtest/gtest.h"
#include "problem19.h"

static_assert(isLeapYear(2000), "2000 is a leap year");
static_assert(!isLeapYear(2001), "2001 is not a leap year");
static_assert(!isLeapYear(2002), "2002 is not a leap year");
static_assert(!isLeapYear(2003), "2003 is not a leap year");
static_assert(isLeapYear(2004), "2004 is a leap year");
static_assert(!isLeapYear(1900), "1900 is not a leap year");
static_assert(!isLeapYear(1901), "1901 is not a leap year");
static_assert(!isLeapYear(1902), "1902 is not a leap year");
static_assert(!isLeapYear(1903), "1903 is not a leap year");
static_assert(isLeapYear(1904), "1904 is a leap year");

static_assert(daysInMonth(2004, 1) == 31, "boom");
static_assert(daysInMonth(2004, 2) == 29, "boom");
static_assert(daysInMonth(2004, 3) == 31, "boom");
static_assert(daysInMonth(2004, 4) == 30, "boom");
static_assert(daysInMonth(2004, 5) == 31, "boom");
static_assert(daysInMonth(2004, 6) == 30, "boom");
static_assert(daysInMonth(2004, 7) == 31, "boom");
static_assert(daysInMonth(2004, 8) == 31, "boom");
static_assert(daysInMonth(2004, 9) == 30, "boom");
static_assert(daysInMonth(2004, 10) == 31, "boom");
static_assert(daysInMonth(2004, 11) == 30, "boom");
static_assert(daysInMonth(2004, 12) == 31, "boom");
static_assert(daysInMonth(2005, 1) == 31, "boom");
static_assert(daysInMonth(2005, 2) == 28, "boom");
static_assert(daysInMonth(2005, 3) == 31, "boom");
static_assert(daysInMonth(2005, 4) == 30, "boom");
static_assert(daysInMonth(2005, 5) == 31, "boom");
static_assert(daysInMonth(2005, 6) == 30, "boom");
static_assert(daysInMonth(2005, 7) == 31, "boom");
static_assert(daysInMonth(2005, 8) == 31, "boom");
static_assert(daysInMonth(2005, 9) == 30, "boom");
static_assert(daysInMonth(2005, 10) == 31, "boom");
static_assert(daysInMonth(2005, 11) == 30, "boom");
static_assert(daysInMonth(2005, 12) == 31, "boom");

using DT = std::array<unsigned, 3>;

namespace
{
	TEST(Problem19Tests, TestProblem19)
	{
		EXPECT_EQ(addWeek(DT({ 2000, 1, 1 })), DT({ 2000, 1, 8 }));
		EXPECT_EQ(addWeek(DT({ 2000, 1, 25 })), DT({ 2000, 2, 1 }));
		EXPECT_EQ(addWeek(DT({ 2000, 2, 25 })), DT({ 2000, 3, 3 }));
		EXPECT_EQ(addWeek(DT({ 1900, 2, 25 })), DT({ 1900, 3, 4 }));
		EXPECT_EQ(addWeek(DT({ 2000, 12, 25 })), DT({ 2001, 1, 1 }));
		EXPECT_EQ(addWeek(DT({ 2000, 12, 26 })), DT({ 2001, 1, 2 }));
		EXPECT_EQ(addWeek(DT({ 2000, 12, 27 })), DT({ 2001, 1, 3 }));

		EXPECT_EQ(171u, problem19());
	}
}
