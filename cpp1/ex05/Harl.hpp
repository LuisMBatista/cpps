/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:21:50 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/29 14:01:21 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <fstream>
#include <string>

class Harl{

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		void complain( std::string level )
		{
			std::string range[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
			void (Harl::*functions[4])() = {
				&Harl::debug,
				&Harl::info,
				&Harl::warning,
				&Harl::error
			};

			for (int i = 0; i < 4; ++i) {
				if (level == range[i]) {
					(this->*functions[i])();
					return;
				}
			}
			std::cout << "\e[0;97m Unsuported claims \e[0;97m" << std::endl;
		}
};

#endif
