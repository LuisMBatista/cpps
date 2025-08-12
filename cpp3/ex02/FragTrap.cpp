/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:38:48 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/12 11:42:42 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string& name) : ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap " << Name << " summoned!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << Name << " Retired" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if(HitPoints <= 0 or EnergyPoints <=0){
		std::cout << "FragTrap " << Name << " cant perform this action" << std::endl;
		return;
	}
    std::cout << "FragTrap " << Name << " is now in requesting high fives" << std::endl;
}
