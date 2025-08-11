/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:40:35 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/11 13:52:01 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		const std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;
	public:
		ClapTrap(const std::string Name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage( int amount);
		void beRepaired( int amount);
};
#endif
