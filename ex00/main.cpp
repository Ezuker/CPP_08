/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 23:49:09 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/12 00:34:44 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int	main()
{
	std::vector<int> vecteur;

	for (int i = 0; i < 5; i++)
		vecteur.push_back(i);
	
	std::cout << easyfind(vecteur, 2) << std::endl;
}
