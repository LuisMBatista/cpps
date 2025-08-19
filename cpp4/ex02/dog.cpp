/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:24 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/19 15:55:41 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"


Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog created with type: " << type << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destroyed with type: " << type << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}
