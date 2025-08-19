/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:05:03 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/19 16:04:44 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "brain.hpp"


Brain::Brain() {
	std::cout << "Brain created." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor called." << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain assignment operator called." << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}


