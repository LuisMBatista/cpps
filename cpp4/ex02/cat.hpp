/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:30 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/19 16:20:38 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* brain;
	public:
		Cat();
		~Cat();
		void makeSound() const ;
};
#endif
