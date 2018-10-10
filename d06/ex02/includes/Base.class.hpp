/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:42:54 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 18:44:00 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_HPP
#define BASE_CLASS_HPP

class A;
class B;
class C;

class Base {
public:
  Base();
  Base(const Base &);
  Base &operator=(const Base &);
  virtual ~Base();
};

#endif // !BASE_CLASS_HPP