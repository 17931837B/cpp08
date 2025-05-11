#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& con, int value)
{
	// typename T::iterator it = con.begin();
	// typename T::iterator ite = con.end();

	// while (it != ite)
	// {
	// 	if (*it == value)
	// 		return it;
	// 	it++;
	// }
	// return (ite);
	typename T::iterator it = std::find(con.begin(), con.end(), value);
	return (it);
}

#endif
