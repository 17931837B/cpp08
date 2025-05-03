#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <algorithm> // std::find との結果を比較するためにインクルード

int main()
{
	std::vector<int> nums;
	int	i = 0;
	int	target;
	typename std::vector<int>::iterator	get_pos;

	while (i < 10)
	{
		nums.push_back(i);
		i++;
	}

	std::cout << "----------test1----------" << std::endl;
	target = 3;
	get_pos = easyfind(nums, target);
	if (get_pos != nums.end())
		std::cout << "(search num) " << target << "  (get_num) " << *get_pos << std::endl;
	else
		std::cout << "Not found\n";
	std::cout << "----------test2----------" << std::endl;
	target = 10;
	get_pos = easyfind(nums, target);
	if (get_pos != nums.end())
		std::cout << "(search num) " << target << "  (get_num) " << *get_pos << std::endl;
	else
		std::cout << "Not found\n";
	std::cout << "----------test3----------" << std::endl;
	target = 0;
	get_pos = easyfind(nums, target);
	if (get_pos != nums.end())
		std::cout << "(search num) " << target << "  (get_num) " << *get_pos << std::endl;
	else
		std::cout << "Not found\n";


    return 0;
}