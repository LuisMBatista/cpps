/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:18 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/12 17:17:39 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : type("Unknown") {
	std::cout << "Animal created with type: " << type << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destroyed with type: " << type << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal makes a sound!" << std::endl;
}

std::string Animal::getType() const {
	return type;
}

