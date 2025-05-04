#include "Span.hpp"

Span::Span(unsigned int N): N_(0)
{
	if (N >= 1)
		this->N_ = N;
	this->con.reserve(N);
}

Span::Span(const Span &copy): N_(copy.N_), con(copy.con)
{

}

Span::~Span()
{

}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->con.reserve(src.con.capacity());
		this->con = src.con;
	}
	return (*this);
}

void Span::addNumber(unsigned int n)
{
	if (this->con.size() >= this->con.capacity())
		throw OverCapacity();
	this->con.push_back(n);
}

int Span::shortestSpan() const
{
	if (this->con.size() <= 1)
		throw CantSpan();
	std::vector<unsigned int> sortVec;
	size_t min = INT_MAX;
	size_t i = 1;
	sortVec = this->con;
	std::sort(sortVec.begin(), sortVec.end());
	while (i < sortVec.size())
	{
		if (sortVec[i] - sortVec[i - 1] < min)
			min = sortVec[i] - sortVec[i - 1];
		i++;
	}
	return (min);
}

int Span::longestSpan() const
{
	if (this->con.size() <= 1)
		throw CantSpan();
	std::vector<unsigned int> sortVec;
	size_t max = 0;
	size_t i = 1;
	sortVec = this->con;
	std::sort(sortVec.begin(), sortVec.end());
	while (i < sortVec.size())
	{
		if (sortVec[i] - sortVec[i - 1] > max)
			max = sortVec[i] - sortVec[i - 1];
		i++;
	}
	return (max);
}

void Span::getInf() const
{
	size_t i = 0;
	std::cout << "[";
	while (i < this->con.size()-1)
	{
		std::cout << this->con[i] << ", ";
		i++;
	}
	std::cout << this->con[i] << "]" << std::endl;
	std::cout << "(Capacity)	" << this->con.capacity() << std::endl;
	std::cout << "(elementsNum)	" << this->con.size() << std::endl;
}

void Span::addRandom(unsigned int const &n, unsigned int const &min, unsigned int const &max)
{
	unsigned int	num;
	size_t			i = 0;

	while (i < n)
	{
		num = rand() % (max - min + 1) + min;
		addNumber(num);
		i++;
	}
}