/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:28 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/19 16:23:07 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
		std::string getType() const;
		
};


#endif
