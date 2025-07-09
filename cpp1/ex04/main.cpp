/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:03:42 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/09 16:11:43 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <fstream>

int main() 
{
	std::ifstream file("data.txt");
	

	std::string line;
	while(std::getline(file, line))
	{
		std::cout <<line << std::endl;
	}

	file.close();
	return 0;
	/* if (argc !=4)
		return(1);
	std::string input = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3]; */
}
