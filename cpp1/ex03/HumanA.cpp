/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:47:59 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/09 14:49:10 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA() {
}

void HumanA::attack() const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

