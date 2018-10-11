/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:12:13 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 20:03:12 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_CLASS_HPP
#define VECTOR_CLASS_HPP
class Vector {
public:
  Vector();
  Vector(int, int);
  Vector(const Vector &);
  Vector &operator=(const Vector &);
  bool operator==(const Vector &);
  ~Vector();

  void setX(int);
  void setY(int);

  int getX(void) const;
  int getY(void) const;

private:
  int _x;
  int _y;
};

#endif // !VECTOR_CLASS_HPP