/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:44:53 by livsauze          #+#    #+#             */
/*   Updated: 2025/07/01 14:36:43 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>


template <typename T>
class Array
{
	private :
		T* _array;
		size_t	_sizeA;
	public :
	Array() : _array(NULL), _sizeA(0) {}
	Array(unsigned int n) : _array(new T[n]()), _sizeA(n) {}
	Array(const Array& other)
	{
		this->_sizeA = other._sizeA;
		if (this->_sizeA > 0)
		{
			this->_array = new T[this->_sizeA];
			for (size_t i = 0; i < this->_sizeA; i++)
			{
				this->_array[i] = other->_array[i];
			}
		}
		else
			this->_array = NULL;
	}
	
	Array& operator=(const Array& other)
	{
		if (this != other)
			delete[] this->_array;
		this->_sizeA = other._sizeA;
		if (this->_sizeA > 0)
		{
			this->_array = new T[this->_sizeA]();
			for (size_t i = 0; i < this->_sizeA; i++)
			{
				this->_array[i] = other->_array[i];
			}
		}
		else
			this->_array = NULL;
		return (*this);
	}
	
	T& operator[](unsigned int index)
	{
		if (index >= _sizeA || index < 0)
			throw std::out_of_range("The index is out of range");
		return _array[index];
	}
	
	~Array() 
	{
		if (_array)
			delete[] _array;
	}

	size_t size()
	{
		return (_sizeA);
	}
};

#endif