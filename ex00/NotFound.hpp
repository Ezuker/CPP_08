/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotFound.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:47:00 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/12 00:48:29 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOTFOUND_HPP
# define NOTFOUND_HPP

# include <exception>

class NotFound : public std::exception
{
	public:
		virtual const char *what() const throw();
};

#endif
