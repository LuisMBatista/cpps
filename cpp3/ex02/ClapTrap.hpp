/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:40:35 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/25 12:23:59 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		const std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;
	public:
		ClapTrap(const std::string& name, int hp = 10, int ep = 10, int ad = 10);
		~ClapTrap();
		ClapTrap( const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		void attack(const std::string& target);
		void takeDamage( int amount);
		void beRepaired( int amount);
};

#endif
