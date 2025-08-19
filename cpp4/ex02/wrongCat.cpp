/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:20 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/13 11:55:54 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat() {
	type = "wrongCat";
	std::cout << "wrongCat created with type: " << type << std::endl;
}

wrongCat::~wrongCat() {
	std::cout << "wrongCat destroyed with type: " << type << std::endl;
}

void wrongCat::makeSound() const {
	std::cout << "Meow! Meow!" << std::endl;
}
