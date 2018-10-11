/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 01:20:47 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/11 01:24:44 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

#define uint unsigned int

template <typename T> class Array {
public:
  Array<T>();
  Array(uint n);
  Array(const Array &);
  Array &operator=(const Array &);
  ~Array();

private:
  uint _n;
  T *_array;
};

#endif // !ARRAY_CLASS_HPP