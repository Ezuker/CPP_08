/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:50:26 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/13 14:11:33 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <stdexcept>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span &cpy);
		~Span();

		Span	&operator=(const Span &rhs);
		
		void			addNumber(unsigned int);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
	private:
		std::vector<unsigned int>	_value;
};

#endif
