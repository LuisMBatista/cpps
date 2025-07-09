/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:04:47 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/09 11:26:54 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main() {
	Zombie zombie("Cloe");
	zombie.announce();
	
	
	Zombie* Zoe = zombie.newZombie("Zoe");
	Zoe->announce();
	
	Zombie randomChump("RandomZombie");
	delete Zoe; // Apagar na avaliação para mostrar que o destrutor é chamado
	return 0;
}
