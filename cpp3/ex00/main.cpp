/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:28:26 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/11 13:51:41 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap Claptrap("Quack");
	Claptrap.attack("Target1");
	Claptrap.takeDamage(5);
	Claptrap.beRepaired(3);
	Claptrap.attack("Target1");
	Claptrap.takeDamage(10);
	Claptrap.beRepaired(5);
	return 0;
}
