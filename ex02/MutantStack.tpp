/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 01:13:00 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/14 01:28:08 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : _size(0)
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &cpy)
{
    *this = cpy;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &rhs)
{
    this->_size = rhs._size;
    this->_value = rhs._value;
    return (*this);
}

template <typename T>
bool    MutantStack<T>::empty()
{
    return (this->_size == 0);
}

template <typename T>
unsigned int MutantStack<T>::size()
{
    return (this->_size);
}

template <typename T>
void    MutantStack<T>::push(T type)
{
    this->_value.insert(this->_value.begin(),type);
    this->_size++;
}

template <typename T>
void    MutantStack<T>::pop()
{
    this->_value.erase(this->_value.begin());
    this->_size--;
}

template <typename T>
T   &MutantStack<T>::top()
{
    return (*this->_value.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return _value.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return _value.end();
}
#endif