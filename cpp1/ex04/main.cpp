/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:03:42 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/19 11:23:15 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <fstream>

int main(int ac, char** av)
{
	if(ac != 4){
		std::cout << "Invalid number of arguments" << std::endl;
		return(1);
	}
	std::ifstream file(av[1]);

	if(!file){
		std::cerr << "Error opening input file" << std::endl;
		return(1);
	}
	
	std::ofstream outfile("output.txt");

	if(!outfile){
		std::cerr << "Error opening output file" << std::endl;
		return(1);
	}
	std::string line;
	std::string outp;
	while(std::getline(file, line))
	{ 
		outp = ft_suber(line, av[2], av[3]);
		outfile << outp << std::endl;
	}
	file.close();
	outfile.close();
	return 0;
}
