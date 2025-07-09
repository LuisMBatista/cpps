/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:01:32 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/09 12:41:38 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) 
{
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		horde[i] = Zombie(name);
	}
	return horde;
}
void announceHorde(Zombie* horde, int N) 
{
	for (int i = 0; i < N; ++i) {
		horde[i].announce();
	}
}
