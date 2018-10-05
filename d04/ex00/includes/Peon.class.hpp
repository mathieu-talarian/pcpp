/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:56:38 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 19:42:48 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_HPP
#define PEON_CLASS_HPP

#include "Victim.class.hpp"

class Peon : public Victim {
public:
  Peon(std::string);
  Peon(Peon const &);
  Peon &operator=(Peon const &);

  ~Peon();

  void getPolymorphed() const;
};

#endif // !PEON_CLASS_HPP