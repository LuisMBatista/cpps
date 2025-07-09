/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:04:47 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/09 13:44:45 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main() {

	Zombie* horde = zombieHorde(10, "Tania");
	announceHorde(horde, 10);
	delete[] horde; 
	
	
	return 0;
}
