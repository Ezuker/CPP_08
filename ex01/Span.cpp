/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:50:47 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/13 14:11:44 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->_value.resize(N);
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
	return (*this);
}

void	Span::addNumber(unsigned int number)
{
	this->_value.push_back(number);
}

unsigned int	Span::shortestSpan()
{
	int	tmp;

	if (this->_value.size() <= 1)
	{
		throw std::logic_error("Vector size must be superior to 1");
	}
	tmp = 0;
	return tmp;
}

unsigned int	Span::longestSpan()
{
	unsigned int	tmp_min = 0xFFFFFFFF;
	unsigned int	tmp_max = 0;

	if (this->_value.size() <= 1)
	{
		throw std::logic_error("Vector size must be superior to 1");
	}
	std::vector<unsigned int>::iterator it;
	std::vector<unsigned int>::iterator ite = this->_value.end();
	for (it = this->_value.begin(); it != ite; ++it)
	{
		if (*it > tmp_max)
			tmp_max = *it;
		if (*it < tmp_min)
			tmp_min = *it;
	}
	return (tmp_max - tmp_min);
}
