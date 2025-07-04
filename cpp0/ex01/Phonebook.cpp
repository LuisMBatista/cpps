/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:55:29 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/03 21:29:50 by lumiguel         ###   ########.fr       */
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
	std::cout << "1. ADD\n";
	std::cout << "2. SEARCH\n";
	std::cout << "3. Exit\n";
}

void Phonebook::addContact(const std::string &firstName, const std::string &lastName, const std::string &nickname, const std::string &phonenumber, const std::string &secret) 
{

	_contacts[_index] = Contact(firstName, lastName, nickname, phonenumber, secret);
	_index = (_index + 1) % 3;
	if( _size < 3)
		_size++;
}

bool Phonebook::displayContacts() const {
	if (_size == 0) {
		std::cout << "No contacts available.\n";
		return false;
	}
	for (int i = 0; i < _size; ++i) {
		std::cout << "Contact " << i + 1 << ": "
		          << _contacts[i].getFirstName() << " "
		          << _contacts[i].getLastName() << " ("
		          << _contacts[i].getNickname() << ")\n";
	}
	return true;
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
	          << contact.getNickname() << ")"
			  << contact.getPhoneNumber() << " "
			  << contact.getSecret() << "\n";
}

