/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:39:10 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/09 14:50:33 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>


class Weapon
{
private:
	Weapon();
	std::string _type;
public:
	Weapon(std::string type);
	~Weapon();
	std::string const &getType() const;
	void setType(std::string type);
};



#endif
