#pragma once

#include <iostream>

template <typename T>
class Array
{
  public:
	unsigned int _size;
	T *_elements;
	class OutBorderException : public std::exception
	{
	  public:
		OutBorderException() {};
		const char *what() const throw()
		{
			return ("Trying to access Out Borders");
		}
		~OutBorderException() throw() {};
	};

	Array()
	{
		_size = 5;
		_elements = new T[_size];
	}
	Array(unsigned int n)
	{
		_size = n;
		_elements = new T[_size];
	}
	Array(const Array &other) : _size(other->_size)
	{
		_elements = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
		{
			_elements[i] = other->_elements[i];
		}
	}
	Array &operator=(const Array &other)
	{
		if (this != other)
		{
			_size = other._size;
			_elements = new T[_size];
			for (unsigned int i = 0; i < _size; ++i)
			{
				_elements[i] = other->_elements[i];
			}
		}
		return (*this);
	}
	T operator[](const unsigned int idx)
	{
		if (idx >= _size || idx < 0)
			throw Array::OutBorderException();
		return (_elements[idx]);
	}
	unsigned int size() const
	{
		return (_size);
	}
	~Array()
	{
		delete[] _elements;
	}
};