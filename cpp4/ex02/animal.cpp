/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:18 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/19 16:19:44 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

AAnimal::AAnimal() : type("Unknown") {
	std::cout << "Default constructor called " << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "Animal destroyed with type: " << type << std::endl;
}

void AAnimal::makeSound() const {
	std::cout << "Animal makes a sound!" << std::endl;
}

std::string AAnimal::getType() const {
	return type;
}

