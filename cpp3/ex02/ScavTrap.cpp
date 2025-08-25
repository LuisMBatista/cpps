/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:38:48 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/25 13:28:01 by lumiguel         ###   ########.fr       */
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

ScavTrap::ScavTrap( const ScavTrap &other): ClapTrap(other){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other){
		this->Name = other.Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return *this;
}