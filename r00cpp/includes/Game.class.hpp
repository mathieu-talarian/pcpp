/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:47:45 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 22:52:48 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_CLASS_HPP
#define GAME_CLASS_HPP

#include "Enemy.class.hpp"
#include "List.class.hpp"
#include "Ship.class.hpp"

class Game {
public:
  Game(Vector);
  Game(const Game &);
  Game &operator=(const Game &);
  ~Game();

  Ship &getShip();
  void turn(long);
  void render(void);
  void printLives();

private:
  void _drawBox();

  void _move_enemies(long);
  void _move_allies(long);
  void _checkForDelete();
  void _check_collisions();
  void _new_Bullet(Vector, int);
  void _new_Enemy(Vector, int);

  Vector _w_size;
  Ship *_ship;
  AEntity **_entities;
  AEntity **_allies;
};
#endif // !GAME_CLASS_HPP
