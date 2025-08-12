/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:21:43 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/29 14:02:47 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

	void Harl::debug() 
	{
		std::cout << "\e[0;95m[ DEBUG ] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do! \e[0;95m" << std::endl;
	}
	void Harl::info( void ){
		std::cout << "\e[4;32m[ INFO ] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\e[4;32m" << std::endl;
	}
	void Harl::warning( void )
	{
			std::cout << "\033[33m[ WARNING ] I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\033[0m" << std::endl;
	}
	void Harl::error( void ){
		std::cout << "\033[31m[ ERROR ] This is unacceptable! I want to speak to the manager now.\033[0m" << std::endl;
	}
