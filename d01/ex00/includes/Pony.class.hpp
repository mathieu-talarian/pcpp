/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:15:40 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 10:34:05 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pony
{
  public:
    Pony(std::string name, std::string stack);
    ~Pony();

    void Talk(void);
    void RunAway(void);
    void ComeBack(void);
    void SayMyName(void);

  private:
    std::string _name;
    std::string _stack;
};