/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:18 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/13 11:55:35 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal() : type("Unknown") {
	std::cout << "wrongDefault constructor called " << std::endl;
}

wrongAnimal::~wrongAnimal() {
	std::cout << "wrongAnimal destroyed with type: " << type << std::endl;
}

void wrongAnimal::makeSound() const {
	std::cout << "wrongAnimal makes a sound!" << std::endl;
}

std::string wrongAnimal::getType() const {
	return type;
}

