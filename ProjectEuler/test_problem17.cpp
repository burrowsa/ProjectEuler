#include "gtest/gtest.h"
#include "problem17.h"

static_assert(zero == 4, "wrong!");
static_assert(one == 3, "wrong!");
static_assert(seven == 5, "wrong!");
static_assert(hundred == 7, "wrong!");

static_assert(countLetters(0u) == zero, "wrong!");
static_assert(countLetters(1u) == one, "wrong!");
static_assert(countLetters(2u) == two, "wrong!");
static_assert(countLetters(3u) == three, "wrong!");
static_assert(countLetters(10u) == ten, "wrong!");
static_assert(countLetters(11u) == eleven, "wrong!");
static_assert(countLetters(12u) == twelve, "wrong!");
static_assert(countLetters(20u) == twenty, "wrong!");
static_assert(countLetters(21u) == twenty + one, "wrong!");
static_assert(countLetters(23u) == twenty + three, "wrong!");
static_assert(countLetters(30u) == thirty, "wrong!");
static_assert(countLetters(35u) == thirty + five, "wrong!");
static_assert(countLetters(36u) == thirty + six, "wrong!");

static_assert(countLetters(100u) == one + hundred, "wrong!");
static_assert(countLetters(200u) == two + hundred, "wrong!");
static_assert(countLetters(300u) == three + hundred, "wrong!");

static_assert(countLetters(101u) == one + hundred + and +one, "wrong!");
static_assert(countLetters(217u) == two + hundred + and +seventeen, "wrong!");
static_assert(countLetters(346u) == three + hundred + and +forty + six, "wrong!");

static_assert(countLetters(1000u) == one + thousand, "wrong!");
static_assert(countLetters(2000u) == two + thousand, "wrong!");
static_assert(countLetters(3000u) == three + thousand, "wrong!");

static_assert(countLetters(1001u) == one + thousand + and +one, "wrong!");
static_assert(countLetters(2017u) == two + thousand + and +seventeen, "wrong!");
static_assert(countLetters(3046u) == three + thousand + and +forty + six, "wrong!");

static_assert(countLetters(1601u) == one + thousand + six + hundred + and +one, "wrong!");
static_assert(countLetters(2717u) == two + thousand + seven + hundred + and +seventeen, "wrong!");
static_assert(countLetters(3946u) == three + thousand + nine + hundred + and +forty + six, "wrong!");

static_assert(problem17(5) == 19u, "problem17(5) should be 19");
static_assert(problem17(1000) == 21124u, "problem17(1000) should be 20194");

namespace
{
	TEST(Problem17Tests, TestProblem17)
	{
		EXPECT_EQ(21124u, problem17(1000));
	}
}
