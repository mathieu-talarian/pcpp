/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEntity.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:43:48 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 23:35:29 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITIES_CLASS_HPP
#define ENTITIES_CLASS_HPP

#include "Vector.class.hpp"

class AEntity {
public:
  AEntity(Vector, char);
  AEntity(const AEntity &);
  AEntity &operator=(const AEntity &);
  virtual ~AEntity() = 0;

  void moveUp();
  void moveDown();
  void moveLeft();
  void moveRight();

  void setC(char);
  char getC(void) const;

  Vector &getPos();

  virtual void draw() = 0;
  virtual bool toBeDeleted(int) = 0;
  virtual void moveMe(long) = 0;
  virtual void activate(Vector, int) = 0;

  void setLife(int);
  int getLife(void) const;

protected:
  Vector _pos;

private:
  char _v;
  int _life;
};
#endif // !ENTITIES_CLASS_HPP
