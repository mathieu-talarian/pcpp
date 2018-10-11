/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:08:00 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/09 18:44:32 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Libraries
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>
#include <sstream>

// Classes
#include "Game.class.hpp"
#include "Ship.class.hpp"
#include "Window.class.hpp"

// Parametres
#define MAX_FPS 120

Window::Window() {
  int mx;
  int my;

  this->_initW();
  beep();
  getmaxyx(this->_win, my, mx);
  this->_size = Vector(mx, my);
  this->_game = new Game(this->_size);
  this->_renderLoop();
}

Window::Window(int x, int y) : _size(x, y) {}

Window::Window(Window const &cpy) { *this = cpy; }

Window &Window::operator=(Window const &cpy) {
  if (this != &cpy) {
    this->_size = cpy._size;
  }
  return *this;
}

Window::~Window() {}

void Window::_initW() {

  this->_win = initscr();
  start_color();

  keypad(stdscr, TRUE);
  raw();
  timeout(0);
  noecho();
  curs_set(0);

  init_pair(1, COLOR_WHITE, COLOR_BLACK);
  init_pair(2, COLOR_RED, COLOR_WHITE);
  init_pair(3, COLOR_RED, COLOR_BLACK);
  init_pair(4, COLOR_GREEN, COLOR_BLACK);
}

long Window::_getTimeNow() { // Returns time in microseconds

  timeval time;
  gettimeofday(&time, NULL);

  return time.tv_usec;
}

bool Window::_handleInput(int keyPressed) {
  if (keyPressed == 27) // ESC key
    return false;

  this->_game->getShip().Action(keyPressed, this->_size);

  return true;
}

void Window::_renderLoop() {

  int keyPressed = 0;

  while (1) {
    // On garde une trace du debut du calcul du frame
    long start = _getTimeNow();

    // On gere les input utilisateur
    keyPressed = getch();
    if (keyPressed != -1)
      if (!_handleInput(keyPressed))
        break;

    // mvaddch(0, 0, )

    this->_game->turn(start);
    this->_game->render();
    if (this->_game->getShip().getLife() == 0){
      delete this->_game;
      break;
    }

    // this->_drawBox();

    // On affiche sur le vrai ecran
    refresh();

    // On nettoie l'ecran
    clear();

    // On s'assure d'un FPS de maxFPS
    usleep(10000);
  }
  endwin(); /* End curses mode		  */
}
