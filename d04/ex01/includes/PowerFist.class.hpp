/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:25:04 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 23:30:49 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_CLASS_HPP
#define POWERFIST_CLASS_HPP

#include "AWeapon.class.hpp"

class PowerFist : public AWeapon {
public:
  PowerFist();
  PowerFist(const PowerFist &);
  PowerFist &operator=(const PowerFist &);
  ~PowerFist();

  void attack(void) const;

private:
};

#endif // !POWERFIST_CLASS_HPP