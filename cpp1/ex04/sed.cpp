/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:05:04 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/24 16:59:04 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string ft_suber(std::string line, std::string l1, std::string l2)
{
	size_t start = 0;

	while ((start = line.find(l1, start)) != std::string::npos)
	{
		line = line.substr(0, start) + l2 + line.substr(start + l1.length());
		start += l2.length();
	}

	return line;
}
