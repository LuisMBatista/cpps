/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:55:29 by lumiguel          #+#    #+#             */
/*   Updated: 2025/06/27 15:18:08 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>


Phonebook::Phonebook() : _index(0), _size(0) {
}
Phonebook::~Phonebook() {
}
void Phonebook::displayMenu() const {
	std::cout << "Phonebook Menu:\n";
	std::cout << "1. Add Contact\n";
	std::cout << "2. Display Contacts\n";
	std::cout << "3. Search Contact\n";
	std::cout << "4. Clear Contacts\n";
	std::cout << "5. Exit\n";
}

void Phonebook::addContact(const std::string &firstName, const std::string &lastName, const std::string &nickname) 
{

	_contacts[_index] = Contact(firstName, lastName, nickname);
	_index = (_index + 1) % 3;
	if( _size < 3)
		_size++;
}

void Phonebook::displayContacts() const {
	if (_size == 0) {
		std::cout << "No contacts available.\n";
		return;
	}
	for (int i = 0; i < _size; ++i) {
		std::cout << "Contact " << i + 1 << ": "
		          << _contacts[i].getFirstName() << " "
		          << _contacts[i].getLastName() << " ("
		          << _contacts[i].getNickname() << ")\n";
	}
}
void Phonebook::clearContacts() {
	for (int i = 0; i < _size; ++i)
		_contacts[i] = Contact("", "", "");
	_index = 0;
	_size = 0;
	std::cout << "All contacts cleared.\n";
}

void Phonebook::searchContact(int index) const {
	if (index < 1 || index > _size) {
		std::cout << "Invalid contact index.\n";
		return;
	}
	const Contact contact = _contacts[index - 1];
	std::cout << "Contact " << index << ": "
	          << contact.getFirstName() << " "
	          << contact.getLastName() << " ("
	          << contact.getNickname() << ")\n";
}
