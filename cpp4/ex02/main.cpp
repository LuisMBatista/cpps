/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:17:26 by lumiguel          #+#    #+#             */
/*   Updated: 2025/08/19 16:27:03 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "brain.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"


int main()
{
    const int SIZE = 10;
    AAnimal* animals[SIZE];

    for (int i = 0; i < SIZE / 2; ++i)
        animals[i] = new Dog();
    for (int i = SIZE / 2; i < SIZE; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < SIZE; ++i)
        delete animals[i];
}


