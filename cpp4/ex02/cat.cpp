/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:20 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/19 15:55:49 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "brain.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat created with type: " << type << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destroyed with type: " << type << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow!" << std::endl;
}
