/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:00:47 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/06 23:22:59 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_CLASS_HPP
#define LIST_CLASS_HPP

#include "ISpaceMarine.class.hpp"
typedef void (*f)(void *data);

typedef struct s_node {
  void *data;
  struct s_node *next;
} t_node;

class List {
public:
  List();
  List(const List &);
  List &operator=(const List &);
  ~List();

  void *getHead(void) const;
  void *getTail(void) const;
  void *getPos(int) const;

  void createNode(void *);

  void insertStart(void *);
  void insertEnd(void *);
  void insertPosition(int, void *);
  int count(void) const;

  void delete_first(void);
  void delete_last(void);
  void delete_position(int);

  bool checkIfAlreadyIn(void *) const;

private:
  t_node *_head, *_tail;

  void _rm();

  void _deletefn(ISpaceMarine *);
};

#endif // !LIST_CLASS_HPP