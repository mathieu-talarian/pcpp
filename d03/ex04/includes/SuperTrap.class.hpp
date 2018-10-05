/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:33:25 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/05 20:03:42 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_CLASS_HPP
#define SUPERTRAP_CLASS_HPP

#include "FragTrap.class.hpp"
#include "NinjaTrap.class.hpp"

class SuperTrap : public virtual NinjaTrap, public virtual FragTrap {
public:
  SuperTrap(std::string);
  SuperTrap(SuperTrap const &);
  SuperTrap &operator=(SuperTrap const &);
  ~SuperTrap(void);
};

#endif // !SUPERTRAP_CLASS_HPP