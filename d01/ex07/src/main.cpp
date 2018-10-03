/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 11:16:12 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 18:19:07 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int checkArg(int ac) {
  if (ac != 4) {
    std::cerr << ((ac < 4) ? "Not enough" : "Too much") << " arguments"
              << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

int openFile(std::ifstream &is, std::string filename) {
  is.open(filename, std::ios::binary);
  if ((is.rdstate() & std::ifstream::failbit) != 0) {
    is.close();
    return std::cerr << "Error opening '" << filename << "'\n" && EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

int buffToString(std::ifstream &is, std::string &s) {
  return std::getline(is, s, '\0')
             ? EXIT_SUCCESS
             : (std::cout << "Can't convert to string, is this a folder?"
                          << std::endl &&
                EXIT_FAILURE);
}

int replacing(std::string &s, std::string s1, std::string s2) {
  size_t start_pos = 0;

  while ((start_pos = s.find(s1, start_pos)) != std::string::npos) {
    s.replace(start_pos, s1.length(), s2);
    start_pos += s2.length();
  }
  return EXIT_SUCCESS;
}

int copyToFile(std::string &s, std::string filename) {
  std::string fn;
  std::ofstream replaced;

  std::transform(filename.begin(), filename.end(), filename.begin(), ::toupper);
  fn = filename.append(".replace");
  replaced.open(fn);
  if (!replaced) {
    return std::cerr << "Can't write on file " << fn << std::endl &&
           EXIT_FAILURE;
  }
  replaced << s.c_str();
  replaced.close();
  return EXIT_SUCCESS;
}

int main(int ac, char *av[]) {
  std::ifstream is;
  std::string s;
  if (checkArg(ac))
    return EXIT_FAILURE;
  if (openFile(is, av[1]))
    return EXIT_FAILURE;
  if (buffToString(is, s))
    return EXIT_FAILURE;
  is.close();
  if (replacing(s, std::string(av[2]), std::string(av[3])))
    return EXIT_FAILURE;
  return copyToFile(s, std::string(av[1]));
}