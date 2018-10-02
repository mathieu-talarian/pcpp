/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:15:19 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/02 10:37:13 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Pony.class.hpp>

void ponyOnTheStack()
{
    Pony jolly("Jolly", "stack");
    jolly.Talk();
    jolly.RunAway();
    jolly.ComeBack();
    jolly.SayMyName();
    return;
}

void ponyOnTheHeap()
{
    Pony *jumper = new Pony("Jumper", "heap");
    jumper->Talk();
    jumper->RunAway();
    jumper->ComeBack();
    jumper->SayMyName();
    delete jumper;
    return;
}

int main(void)
{
    ponyOnTheStack();
    std::cout << std::endl;
    ponyOnTheHeap();
    return 0;
}