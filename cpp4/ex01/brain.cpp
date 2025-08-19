/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:05:03 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/13 16:08:27 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void Brain::setIdeas(int index, const std::string &idea) {
	if (index >= 0 && index < 100) {
		ideas[index] = idea;
	} else {
		std::cerr << "Invalid index" << std::endl;
	}
}

std::string Brain::getIdeas(int index) const {
	if (index >= 0 && index < 100) {
		return ideas[index];
	} else {
		std::cerr << "Invalid index" << std::endl;
		return "";
	}
}
