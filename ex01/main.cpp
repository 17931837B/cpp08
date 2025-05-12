#include "Span.hpp"

void	test1()
{
	std::cout << "-----test1-----" << std::endl;
	Span sp = Span(3);
	sp.addNumber(1);
	sp.addNumber(3);
	sp.addNumber(7);
	sp.getInf();
	std::cout << "(shortestSpan)	" <<sp.shortestSpan() << std::endl;
	std::cout << "(longestSpan)	" << sp.longestSpan() << std::endl;
}

void	test2()
{
	std::cout << "-----test2-----" << std::endl;
	Span sp = Span(3);
	sp.addRandom(3, 1, 10);
	sp.getInf();
	std::cout << "(shortestSpan)	" <<sp.shortestSpan() << std::endl;
	std::cout << "(longestSpan)	" << sp.longestSpan() << std::endl;
}

void	test3()
{
	std::cout << "-----test3-----" << std::endl;
	try
	{
		Span sp = Span(3);
		sp.addRandom(4, 1, 10);
		sp.getInf();
		std::cout << "(shortestSpan)	" <<sp.shortestSpan() << std::endl;
		std::cout << "(longestSpan)	" << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
			std::cout << e.what() << std::endl;
	}
}

void	test4()
{
	std::cout << "-----test4-----" << std::endl;
	try
	{
		Span sp = Span(10000);
		sp.addRandom(10000, 0, 1000000);
		sp.getInf();
		std::cout << "(shortestSpan)	" <<sp.shortestSpan() << std::endl;
		std::cout << "(longestSpan)	" << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
			std::cout << e.what() << std::endl;
	}
}

void	test5()
{
	std::cout << "-----test5-----" << std::endl;
	try
	{
		Span sp = Span(0);
		sp.addRandom(1, 0, 1000000);
		sp.getInf();
		std::cout << "(shortestSpan)	" <<sp.shortestSpan() << std::endl;
		std::cout << "(longestSpan)	" << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
			std::cout << e.what() << std::endl;
	}
}

int main()
{
	srand(time(NULL));

	test1();
	test2();
	test3();
	// test4();
	test5();

	return (0);
}
