/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:30 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/13 11:56:04 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
	public:
		wrongCat();
		~wrongCat();
		void makeSound() const ;
};
#endif
