/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:07:15 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 19:23:35 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_CLASS_HPP
#define WINDOW_CLASS_HPP

#include "Game.class.hpp"
#include "Vector.class.hpp"
#include "ft_ncurses.hpp"

class Window {
public:
  Window();
  Window(int, int);
  Window(const Window &);
  Window &operator=(const Window &);
  ~Window();

private:
  WINDOW *_win;
  Vector _size;
  Vector _start;
  Game *_game;
  void _initW();
  bool _handleInput(int keyPresed);
  void _renderLoop();

  long _getTimeNow(); // Returns time in microseconds
};

#endif // !WINDOW_CLASS_HPP
