/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:43:45 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/03 22:32:00 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_CLASS_HPP
#define LOGGER_CLASS_HPP

#include <iostream>

class Logger {
public:
  Logger(std::string filename);
  ~Logger();

  void log(std::string const &dest, std::string const &message);

private:
  void _logToFile(std::string const output);
  void _logToConsole(std::string const output);

  std::string const _makeLogEntry(std::string const message);
  std::string _filename;
  std::ofstream *_logfile;
};

#endif
