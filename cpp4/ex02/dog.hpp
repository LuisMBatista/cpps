/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:32 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/19 16:20:35 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP


#include "animal.hpp"
#include "brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* brain;
	public:
		Dog();
		~Dog();
		void makeSound() const;
};
#endif
