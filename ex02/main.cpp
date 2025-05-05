#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

template<typename T>
void showStack(MutantStack<T> ms)
{
	int i = 0;
	int size = ms.size();
	typename MutantStack<T>::iterator ite = ms.end() - 1;
	while (i < size)
	{
		std::cout << "|	" << (*ite) << "	|"<< std::endl;
		i++;
		ite--;
	}
	std::cout << std::endl;
}

void test1()
{
	std::cout << "----------test1----------" << std::endl;
	MutantStack<int> ms;
	ms.push(0);
	ms.push(1);
	ms.push(2);
	ms.push(3);
	ms.push(4);
	showStack(ms);
}

void test2()
{
	std::cout << "----------test2----------" << std::endl;
	MutantStack<int> ms;
	ms.push(0);
	ms.push(1);
	ms.push(2);
	ms.push(3);
	ms.push(4);
	std::cout << "top is " << ms.top() << ". top pop." << std::endl;
	ms.pop();
	showStack(ms);
}

void test3()
{
	std::cout << "----------test3----------" << std::endl;
	MutantStack<int> ms;
	ms.push(0);
	ms.push(1);
	ms.push(2);
	ms.push(3);
	ms.push(4);
	showStack(ms);
	std::cout << "Using cbegin() and cend(): ";
	for (typename MutantStack<int>::const_iterator it = ms.cbegin(); it != ms.cend(); ++it){
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Using rbegin() and rend(): ";
	for (typename MutantStack<int>::reverse_iterator it = ms.rbegin(); it != ms.rend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

int main()
{
	test1();
	test2();
	test3();
	return 0;
}
