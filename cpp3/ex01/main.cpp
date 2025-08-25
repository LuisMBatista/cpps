/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:28:26 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/25 13:16:26 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap c1("Quack");

    ScavTrap s2("ola");
    std::cout << "\n=== Creating ScavTrap ===" << std::endl;
    ScavTrap s1("Guss");

    std::cout << "\n=== Testing ClapTrap actions ===" << std::endl;
    c1.attack("francinette");
    c1.takeDamage(5);
    c1.beRepaired(3);

    std::cout << "\n=== Testing ScavTrap actions ===" << std::endl;
    s1.attack("norminette");
    s1.takeDamage(20);
    s1.beRepaired(10);
    s1.guardGate();
    
    s2 = s1;
    std::cout << "\n=== Testing ClapTrap2 actions ===" << std::endl;
    s2.attack("francinette");
    s2.takeDamage(5);
    s2.beRepaired(3);

    std::cout << "\n=== Leaving main (destructors should be called) ===" << std::endl;
    return 0;
}
