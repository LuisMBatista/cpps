/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:56:23 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/09 14:04:29 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){
	std::string brain = "HI THIS IS BRAIN";
	std::string* brainPtr = &brain;
	std::string& brainRef = brain;

	std::cout << "Address of the string variable: " << &brain << std::endl;
	std::cout << "Address held by the pointer: " << brainPtr << std::endl;
	std::cout << "Address held by the reference: " << &brainRef << std::endl;

	std::cout << "The value of the string variable: " << brain << std::endl;
	std::cout << "The value pointed to by the pointer: " << *brainPtr << std::endl;
	std::cout << "The value referenced by the reference: " << brainRef << std::endl;
	return 0;
}
