/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:49:43 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 19:02:43 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>

#include "A.class.hpp"
#include "B.class.hpp"
#include "Base.class.hpp"
#include "C.class.hpp"

Base *newa() {
  std::cout << "New A" << std::endl;
  return new A();
}

Base *newb() {
  std::cout << "New B" << std::endl;
  return new B();
}

Base *newc() {
  std::cout << "New C" << std::endl;
  return new C();
}

typedef Base *(*f)();

Base *generate(void) {
  f tab[] = {&newa, &newb, &newc};
  return tab[rand() % 3]();
}

void identify_from_pointer(Base *gen) {
  std::cout << "Identifying from ptr => " << std::endl;
  A *a = dynamic_cast<A *>(gen);
  std::cout << (a ? "A" : "Not A") << std::endl;
  B *b = dynamic_cast<B *>(gen);
  std::cout << (b ? "B" : " Not B") << std::endl;
  C *c = dynamic_cast<C *>(gen);
  std::cout << (c ? "C" : "Not C") << std::endl;
}

void identify_from_reference(Base &gen) {
  std::cout << "Identifying from ref => " << std::endl;
  try {
    A &a = dynamic_cast<A &>(gen);
    std::cout << "A" << std::endl;
    static_cast<void>(a);
  } catch (std::bad_cast &bc) {
    std::cout << "Not A" << std::endl;
  }
  try {
    B &b = dynamic_cast<B &>(gen);
    std::cout << "B" << std::endl;
    static_cast<void>(b);
  } catch (std::bad_cast &bc) {
    std::cout << "Not B" << std::endl;
  }
  try {
    C &c = dynamic_cast<C &>(gen);
    std::cout << "C" << std::endl;
    static_cast<void>(c);
  } catch (std::bad_cast &bc) {
    std::cout << "Not C" << std::endl;
  }
}

int main() {
  Base *gen = generate();
  identify_from_pointer(gen);
  identify_from_reference(*gen);
  delete gen;
}