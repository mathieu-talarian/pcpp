/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:13:16 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 23:30:35 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PASMA_RIFLE_HPP
#define PASMA_RIFLE_HPP
#include "AWeapon.class.hpp"

class PlasmaRifle : public AWeapon {
public:
  PlasmaRifle();
  PlasmaRifle(const PlasmaRifle &);
  PlasmaRifle &operator=(const PlasmaRifle &);
  ~PlasmaRifle();
  void attack() const;

private:
};

#endif // !PASMA_RIFLE_HPP