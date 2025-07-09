/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:46:07 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/09 14:55:31 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:	
	std::string _name;
	Weapon* _weapon;  
public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon& weapon); 
	void attack() const;
};

#endif
