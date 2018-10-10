/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:46:33 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 18:47:08 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_CLASS_HPP
#define C_CLASS_HPP

#include "Base.class.hpp"

class C : public Base {
public:
  C();
  C(const C &);
  C &operator=(const C &);
  ~C();

private:
};

#endif // !C_CLASS_HPP