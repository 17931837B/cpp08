#include "Span.hpp"

Span::Span(unsigned int N): N_(N)
{
	this->con.reserve(N);
}

Span::Span(const Span &copy): N_(copy.N_), con(copy.con)
{

}

Span::~Span() {}

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
		throw FullException();
	this->con.push_back(n);
}
