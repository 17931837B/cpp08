#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{

}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &copy): std::stack<T>(copy)
{
	*this = copy;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& src)
{
	if (this != &src)
		std::stack<T>::operator=(src);
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{

}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const
{
	return (this->rend());
}
