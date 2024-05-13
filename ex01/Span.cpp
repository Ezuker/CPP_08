/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:50:47 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/13 21:59:02 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _maxLength(N)
{
}

Span::Span(const Span &cpy)
{
	*this = cpy;
}

Span::~Span()
{
}

Span	&Span::operator=(const Span &rhs)
{
	this->_value = rhs._value;
	this->_maxLength = rhs._maxLength;
	return (*this);
}

void	Span::addNumber(int number)
{
	if (this->_value.size() >= this->_maxLength)
		throw std::length_error("Array already full!");
	this->_value.push_back(number);
}

unsigned int	Span::shortestSpan()
{
	int	min_dist = 0x7FFFFFFF;

	if (this->_value.size() <= 1)
		throw std::logic_error("Vector size must be superior to 1");
	std::vector<int>::iterator it;
	std::vector<int>::iterator ite = this->_value.end();
	for (it = this->_value.begin(); it != ite; ++it)
	{
		for (std::vector<int>::iterator it2 = this->_value.begin(); it2 != ite; ++it2)
		{
			if (it != it2 && min_dist > abs(*it - *it2))
				min_dist = abs(*it - *it2);
		}
	}
	return abs(min_dist);
}

unsigned int	Span::longestSpan()
{
	int	tmp_min = 0x7FFFFFFF;
	int	tmp_max = 0x80000000;

	if (this->_value.size() <= 1)
		throw std::logic_error("Vector size must be superior to 1");
	std::vector<int>::iterator it;
	std::vector<int>::iterator ite = this->_value.end();
	for (it = this->_value.begin(); it != ite; ++it)
	{
		if (*it > tmp_max)
			tmp_max = *it;
		if (*it < tmp_min)
			tmp_min = *it;
	}
	return (tmp_max - tmp_min);
}
