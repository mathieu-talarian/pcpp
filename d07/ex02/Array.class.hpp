/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 01:20:47 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/11 18:04:57 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

#include <exception>
#include <iostream>

template <typename T> class Array {
public:
  Array<T>() : _n(0) {
    this->_array = NULL;
    return;
  }

  Array<T>(uint n) : _n(n) { this->_array = new T[this->_n](); };

  Array<T>(const Array<T> &cpy) {
    this->_array = new T[cpy.getN()]();
    this->_n = cpy.getN();
    for (uint i = 0; i < cpy.getN(); i++)
      this->_array[i] = cpy[i];
    *this = cpy;
  };

  Array<T> &operator=(const Array<T> &cpy) {
    if (this->_array)
      delete[] this->_array;
    this->_array = new T[cpy._n];
    this->_n = cpy.getN();
    for (uint i = 0; i < cpy._n; i++)
      this->_array[i] = cpy[i];
    return *this;
  };

  T &operator[](uint n) const {
    if (n < 0 || n >= this->_n)
      throw Array::OutOfLimitsException();
    return this->_array[n];
  };

  ~Array<T>() { delete[] this->_array; };

  class OutOfLimitsException : public std::exception {
  public:
    OutOfLimitsException(){};
    virtual ~OutOfLimitsException() throw(){};

    virtual const char *what() const throw() { return ("Out of limits"); };
  };

  uint getN() const { return this->_n; };
  void setN(uint n) { this->_n = n; };

private:
  uint _n;
  T *_array;
};

#endif // !ARRAY_CLASS_HPP