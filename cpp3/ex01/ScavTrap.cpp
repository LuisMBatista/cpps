/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:38:48 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/12 10:38:46 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap " << Name << " summoned!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << Name << " Retired" << std::endl;
}

void ScavTrap::guardGate()
{
	if(HitPoints <= 0 or EnergyPoints <=0){
		std::cout << "ScavTrap " << Name << " cant perform this action" << std::endl;
		return;
	}
    std::cout << "ScavTrap " << Name << " is now in Gate Keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if(HitPoints <= 0 or EnergyPoints <=0){
		std::cout << "ScavTrap " << Name << " cant perform this attack" << std::endl;
		return;
	}
	else
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	return;
}
