/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:28 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/13 11:54:53 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <iostream>

class wrongAnimal
{
	protected:
		std::string type;
	public:
		wrongAnimal();
		~wrongAnimal();
		void makeSound() const;
		std::string getType() const;
		
};


#endif
