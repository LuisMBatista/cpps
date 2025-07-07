/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:55:29 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/07 15:54:45 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

volatile sig_atomic_t g_exitFlag = 0;

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
		std::cout << i + 1 << ": ";
		std::cout << wordFitting(_contacts[i].getFirstName()) + "|";
		std::cout << wordFitting(_contacts[i].getLastName()) + "|";
		std::cout << wordFitting(_contacts[i].getNickname()) + "|\n";
	}
	return true;
}

void Phonebook::searchContact(int index) const {
	if (index < 1 || index > _size) {
		std::cout << "Invalid contact index.\n";
		return;
	}
	const Contact contact = _contacts[index - 1];
	std::cout << index << ": ";
		std::cout << wordFitting(contact.getFirstName()) + "|";
		std::cout << wordFitting(contact.getLastName()) + "|";
		std::cout << wordFitting(contact.getNickname()) + "|";
		std::cout << wordFitting(contact.getPhoneNumber()) + "|";
		std::cout << wordFitting(contact.getSecret()) + "|\n";
}

std::string    wordFitting(std::string fullWord)
{
    std::string space = "          ";
    std::string fittedName = fullWord.substr(0, 10);
    if (fullWord.length() > 10)
        fittedName[9] = '.';
    int len = fittedName.length();
    for (int i = 0; i < len; i++)
        space[10 - len + i] = fittedName[i];
    return (space);
}
void signalHandler(int signum)
{
	g_exitFlag = 1;
	std::cin.clear();
    std::cout << "\nExiting\n";
    exit(signum);
}
