/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:41:31 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 17:18:29 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.class.hpp"

int main() {
  Logger l("log.txt");
  l.log("file", "Test");
  l.log("file", "new test");
  l.log("console", "a test on stdout");
  return 0;
}