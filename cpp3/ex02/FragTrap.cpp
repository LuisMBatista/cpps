/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:38:48 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/25 13:27:52 by lumiguel         ###   ########.fr       */
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
FragTrap::FragTrap( const FragTrap&other): ClapTrap(other){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other){
		this->Name = other.Name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return *this;
}