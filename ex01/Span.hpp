#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <ctime>


class Span
{
	private:
		unsigned int				N_;
		std::vector<unsigned int>	con;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator=(const Span &src);
		~Span();
		void	addNumber(unsigned int n);
		int		shortestSpan() const;
		int		longestSpan() const;
		void	getInf() const;
		void	addRandom(unsigned int const &n, unsigned int const &min, unsigned int const &max);
	class OverCapacity : public std::exception
	{
		public:
			virtual const char *what() const throw() {
				return "[OverCapacity]";
			}
	};
	class CantSpan : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "[CantSearchSpan]";
			}
	};
};

#endif
