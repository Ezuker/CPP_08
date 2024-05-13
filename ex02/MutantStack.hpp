/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:57:41 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/14 01:26:12 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>

template <typename T>
class MutantStack
{
    public:
        MutantStack<T>();
        MutantStack<T>(const MutantStack &cpy);
        ~MutantStack<T>();

        MutantStack<T> &operator=(const MutantStack &rhs);

        typedef typename std::vector<T>::iterator iterator;

        bool    empty();
        unsigned int size();
        void    push(T type);
        void    pop();
        T   &top();
        iterator begin();
        iterator end();
        

    private:
        unsigned int    _size;
        std::vector<T>       _value;
};
#endif