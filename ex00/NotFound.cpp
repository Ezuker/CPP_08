/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotFound.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:46:07 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/12 00:46:51 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotFound.hpp"

const char *NotFound::what() const throw()
{
	return ("Not Found");
}