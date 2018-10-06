/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:00:24 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 17:15:03 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "List.class.hpp"
#include "ISpaceMarine.class.hpp"
#include "Squad.class.hpp"
#include <iostream>
#include <stdlib.h>

List::List() : _head(NULL), _tail(NULL) {}

List::List(List const &cpy) { *this = cpy; }

List &List::operator=(List const &cpy) {
  if (this != &cpy) {
    this->_head = cpy._head;
    this->_tail = cpy._tail;
  }
  return *this;
}

List::~List() {
  t_node *h = this->_head;
  while (h) {
    t_node *tmp = h->next;
    this->_deletefn((ISpaceMarine *)(h->data));
    delete h;
    h = tmp;
  }
}

void *List::getHead(void) const { return this->_head; }
void *List::getTail(void) const { return this->_tail; }

void *List::getPos(int p) const {
  t_node *cur;
  cur = this->_head;
  for (int i = 0; cur; i++) {
    if (i == p) {
      return cur->data;
    }
    cur = cur->next;
  }
  return NULL;
}

void List::createNode(void *node) {
  t_node *tmp = new (t_node);
  tmp->data = node;
  tmp->next = NULL;

  if (this->_head == NULL) {
    this->_head = tmp;
    this->_tail = tmp;
    tmp = NULL;
  } else {
    this->_tail->next = tmp;
    this->_tail = tmp;
  }
}

void List::insertStart(void *node) {
  t_node *temp = new t_node;
  temp->data = node;
  temp->next = this->_head;
  this->_head = temp;
}

void List::insertEnd(void *node) { this->createNode(node); }

void List::insertPosition(int p, void *node) {
  t_node *pre = new t_node;
  t_node *cur = new t_node;
  t_node *temp = new t_node;
  cur = this->_head;
  for (int i = 1; i < p && cur; i++) {
    pre = cur;
    cur = cur->next;
  }
  temp->data = node;
  pre->next = temp;
  temp->next = cur;
}

int List::count(void) const {
  int i = 0;
  t_node *head = this->_head;
  while (head) {
    i++;
    head = head->next;
  }
  return i;
}

void List::delete_first() {
  t_node *temp = new t_node;
  temp = this->_head;
  this->_head = this->_head->next;
  this->_deletefn((ISpaceMarine *)(temp->data));
  delete temp;
}

void List::delete_last() {
  t_node *current = new t_node;
  t_node *previous = new t_node;
  current = this->_head;
  while (current->next != 0) {
    previous = current;
    current = current->next;
  }
  this->_tail = previous;
  previous->next = 0;
  delete current;
}

void List::delete_position(int pos) {
  t_node *current = new t_node;
  t_node *previous = new t_node;
  current = this->_head;
  for (int i = 1; i < pos; i++) {
    previous = current;
    current = current->next;
  }
  previous->next = current->next;
}

bool List::checkIfAlreadyIn(void *node) const {
  t_node *h = this->_head;
  while (h) {
    if (node == h->data) {
      return true;
    }
    h = h->next;
  }
  return false;
}

void List::_deletefn(ISpaceMarine *data) { delete data; }