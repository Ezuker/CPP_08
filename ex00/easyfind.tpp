/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 23:54:30 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/14 17:30:00 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "easyfind.hpp"

template <class T>
int	&easyfind(T array, int toFind)
{
	typename T::iterator it;
	typename T::iterator ite = array.end();

	for (it = array.begin(); it != ite; ++it)
	{
		if (*it == toFind)
			return *it;
	}
	throw std::logic_error("Not found");
}

#endif
