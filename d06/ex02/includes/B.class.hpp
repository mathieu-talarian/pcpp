/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.class.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:45:18 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/10 18:45:53 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_CLASS_HPP
#define B_CLASS_HPP

#include "Base.class.hpp"

class B : public Base
{
public:
    B();
    B(const B &);
    B &operator=(const B &);
    ~B();

private:
    
};

#endif // !B_CLASS_HPP