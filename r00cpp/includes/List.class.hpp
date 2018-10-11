/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:00:47 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/07 17:34:21 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_CLASS_HPP
#define LIST_CLASS_HPP

#include "AEntity.class.hpp"
#include <stdlib.h>

typedef struct s_node {
  AEntity *data;
  struct s_node *next;
} t_node;

class List {
public:
  List();
  List(const List &);
  List &operator=(const List &);
  ~List();

  t_node *getHead(void) const;
  t_node *getTail(void) const;
  t_node *getPos(int) const;

  void createNode(AEntity *);

  void insertStart(AEntity *);
  void insertEnd(AEntity *);
  void insertPosition(int, AEntity *);
  int count(void) const;

  void delete_first(void);
  void delete_last(void);
  void delete_position(t_node *);

  bool checkIfAlreadyIn(void *) const;

private:
  t_node *_head, *_tail;
  void _rm();
  void _deletefn(AEntity *);
};

#endif // !LIST_CLASS_HPP