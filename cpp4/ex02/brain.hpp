/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:05:00 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/19 16:04:50 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "animal.hpp"

class Brain {
public:
	Brain();
	~Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	
private:
	std::string ideas[100];
};

#endif

