/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:43:43 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 17:17:03 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.class.hpp"
#include <fstream>
#include <iostream>

Logger::Logger(std::string filename) : _filename(filename) {
  this->_logfile = new std::ofstream(filename);
}
Logger::~Logger() { delete this->_logfile; }

void Logger::log(std::string const &dest, std::string const &message) {
  typedef void (Logger::*memberFn)(std::string const output);
  std::string out[] = {"console", "file"};
  memberFn mf[] = {&Logger::_logToConsole, &Logger::_logToFile};
  for (int i = 0; i < 2; i++) {
    if (out[i].compare(dest) == 0) {
      (this->*(mf[i]))(this->_makeLogEntry(message));
    }
  }
}

void Logger::_logToFile(std::string const output) {
  (*this->_logfile) << output << std::endl;
}

void Logger::_logToConsole(std::string const output) {
  std::cout << output << std::endl;
}

std::string const Logger::_makeLogEntry(std::string const message) {
  time_t now = time(0);
  std::string dt = ctime(&now);
  dt.append(" " + message);
  return dt;
}