/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:00:44 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/09 13:45:20 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP	

#include <string>
#include <iostream>
#include <cstdlib>

class Zombie 
{
private:
	std::string _name;
public:
	Zombie();
	~Zombie();
	void announce( void );
	Zombie(std::string name);
	Zombie* newZombie( std::string name);
};

Zombie* zombieHorde(int N, std::string name);
void announceHorde(Zombie* horde, int N);

#endif
