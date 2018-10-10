/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 00:26:35 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/11 01:04:38 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> void iter(T *t, uint length, void (*f)(T)) {
  for (uint i = 0; i < length; i++)
    f(t[i]);
}

template <typename T> void doiter(T t) { std::cout << t << std::endl; }

int main(void) {
  int foo[] = {16, 2, 77, 40, 12071};
  std::string fuu[] = {"lol", "swag", "yolo"};

  // iter<int>(foo, 5, doiter<int>);
  // iter<std::string>(fuu, 3, doiter<std::string>);

  doiter<int>(12);
  doiter<std::string>("coucou");
  return 0;
}
