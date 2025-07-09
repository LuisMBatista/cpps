/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:42:44 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/09 14:53:09 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

std::string const &Weapon::getType() const {
	return _type;
}

void Weapon::setType(std::string type) {
	_type = type;
}

Weapon::Weapon(std::string type) : _type(type) {
}

Weapon::~Weapon() {
	std::cout << "Weapon of type '" << _type << "' destroyed.\n";
}
