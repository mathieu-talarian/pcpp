/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:44:17 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 18:45:06 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_CLASS_HPP
#define A_CLASS_HPP

#include "Base.class.hpp"

class A : public Base {
public:
  A();
  A(const A &);
  A &operator=(const A &);
  ~A();

private:
};

#endif // !A_CLASS_HPP