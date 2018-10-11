/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:00:24 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 17:56:53 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "List.class.hpp"

List::List() : _head(NULL), _tail(NULL) {}

List::List(List const &cpy) { *this = cpy; }

List &List::operator=(List const &cpy) {
  if (this != &cpy) {
    this->_head = cpy._head;
    this->_tail = cpy._tail;
    // this->_rm();
    // t_node *head = cpy._head;
    // while (head) {
    //   this->createNode(((ISpaceMarine *)(head->data))->clone());
    //   head = head->next;
    // }
  }
  return *this;
}

void List::_rm() {
  t_node *h = this->_head;
  while (h) {
    t_node *tmp = h->next;
    this->_deletefn((AEntity *)(h->data));
    delete h;
    h = tmp;
  }
}

List::~List() { this->_rm(); }

t_node *List::getHead(void) const { return this->_head; }
t_node *List::getTail(void) const { return this->_tail; }

t_node *List::getPos(int p) const {
  t_node *cur;
  cur = this->_head;
  for (int i = 0; cur; i++) {
    if (i == p) {
      return cur;
    }
    cur = cur->next;
  }
  return NULL;
}

void List::createNode(AEntity *node) {
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

void List::insertStart(AEntity *node) {
  t_node *temp = new t_node;
  temp->data = node;
  temp->next = this->_head;
  this->_head = temp;
}

void List::insertEnd(AEntity *node) { this->createNode(node); }

void List::insertPosition(int p, AEntity *node) {
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
  if (this->_head) {
    t_node *temp;
    temp = this->_head;
    this->_head = this->_head->next;
    this->_deletefn((AEntity *)(temp->data));
    delete temp;
  }
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

void List::delete_position(t_node *node) {
  if (this->_head == node) {
    if (this->_head->next == NULL) {
      return;
    }

    /* Copy the data of next node to head */
    this->_head->data = this->_head->next->data;

    // store address of next node
    node = this->_head->next;

    // Remove the link of next node
    this->_head->next = this->_head->next->next;

    // free memory
    this->_deletefn(node->data);
    delete node;

    return;
  }
  t_node *prev = this->_head;
  while (prev->next != NULL && prev->next != node)
    prev = prev->next;

  // Check if node really exists in Linked List
  if (prev->next == NULL)
    return;

  // Remove node from Linked List
  prev->next = prev->next->next;

  // Free memory
  this->_deletefn(node->data);
  delete node;
  return;
}

bool List::checkIfAlreadyIn(void *node) const {
  t_node *h = this->_head;
  while (h) {
    if (node == (void *)h->data)
      return true;

    h = h->next;
  }
  return false;
}

void List::_deletefn(AEntity *data) { delete data; }