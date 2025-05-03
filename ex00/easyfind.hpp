#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T& con, int value)
{
	typename T::iterator it = con.begin();
	typename T::iterator ite = con.end();

	while (it != ite)
	{
		if (*it == value)
			return it;
		it++;
	}
	return (ite);
}

#endif