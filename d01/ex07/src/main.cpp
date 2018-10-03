/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 11:16:12 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 11:48:28 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int openFile(std::ifstream &is, std::string filename) {
  is.open(filename);
  if ((is.rdstate() & std::ifstream::failbit) != 0)
    std::cerr << "Error opening '" << filename << "'\n";
  return 0;
}

int main(int ac, char *av[]) {
  std::ifstream is;
  if (ac != 4) {
    std::cerr << ((ac < 4) ? "Not enough" : "Too much") << " arguments"
              << std::endl;
    return 0;
  }
  if (!openFile(is, av[1]))
    return 0;
}