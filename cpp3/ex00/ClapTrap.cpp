/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:38:22 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/11 13:48:45 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target){
	if(HitPoints <= 0 or EnergyPoints <=0){
		std::cout << "ClapTrap " << Name << " cant perform this attack" << std::endl;
		return;
	}
	else
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	return;
}
void ClapTrap::takeDamage(int amount){
	if(HitPoints <= 0){
		std::cout << "ClapTrap " << Name << " is already Claped" << std::endl;
		return;
	}
	else{
		HitPoints = HitPoints- amount;
		std::cout << "ClapTrap " << Name << " has taken " << amount << " points of damage!" << std::endl;
	}
	return;
}

void ClapTrap::beRepaired( int amount){
	if(HitPoints <= 0){
		std::cout << "ClapTrap " << Name << " is already Claped" << std::endl;
		return;
	}
	else if(HitPoints == 10){
		std::cout << "ClapTrap " << Name << " Fully operational" << std::endl;
		return;
	}
	else{
		HitPoints = HitPoints + amount;
		if(HitPoints > 10)
			HitPoints = 10;
		std::cout << "ClapTrap " << Name << " was repaired " << amount << " points of damage!" << std::endl;
	}
	return;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << Name << " has retired(destructor called)" << std::endl;
}

ClapTrap::ClapTrap(const std::string Name) : Name(Name), HitPoints(10), EnergyPoints(10), AttackDamage(10) {
	std::cout << "ClapTrap " << Name << " has been summoned (cuctor called)" << std::endl;
}
