#include "problem19.h"

unsigned problem19() noexcept
{
	unsigned count = 0;
	for (auto dt = start_sunday; dt[0] < 2001; dt = addWeek(dt))
	{
		if (dt[2] == 1)
		{
			count++;
		}
	}
	return count;
}
