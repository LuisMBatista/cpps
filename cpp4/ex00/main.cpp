/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:26 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/13 15:27:14 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
meta->makeSound();

const wrongAnimal *wrongMeta = new wrongAnimal();
const wrongAnimal *wrongC = new wrongCat();

wrongC->makeSound();
wrongMeta->makeSound();

delete meta;
delete j;
delete i;
delete wrongMeta;
delete wrongC;

return 0;
}
