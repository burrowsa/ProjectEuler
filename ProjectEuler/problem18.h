#pragma once
#include <list>
#include <iterator>
#include <algorithm>
#include <cassert>

template<class T>
auto sumPathThroughTriangle(std::initializer_list<std::initializer_list<T>> const& values) noexcept
{
	auto raw = std::cbegin(values);
	if (raw == std::cend(values))
	{
		return 0;
	}

	assert(raw->size() == 1);
	std::list<T> row(*raw);

	for (raw++; raw != std::cend(values); raw++)
	{
		std::list<T> parents = row;
		row.clear();

		assert(raw->size() == parents.size() + 1);

		auto v = std::cbegin(*raw);
		auto r = std::cbegin(parents);
		row.push_back(*v + *r);
		v++, r++;

		auto l = std::cbegin(parents);
		for (; r != std::cend(parents); v++, l++, r++)
		{
			row.push_back(std::max(*l, *r) + *v);
		}
		assert(v != std::cend(*raw));
		assert(l != std::cend(parents));

		row.push_back(*v + *l);
		v++, l++;
		assert(v == std::cend(*raw));
		assert(l == std::cend(parents));
	}

	return *std::max_element(std::cbegin(row), std::cend(row));
};
