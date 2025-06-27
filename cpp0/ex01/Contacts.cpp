/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:47:33 by lumiguel          #+#    #+#             */
/*   Updated: 2025/06/27 15:16:58 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>


Contact::Contact() : _firstName(""), _lastName(""), _nickname("") {}
Contact::Contact(const std::string &firstName, const std::string &lastName, const std::string &nickname)
	: _firstName(firstName), _lastName(lastName), _nickname(nickname) {}

Contact::~Contact() {}

const std::string &Contact::getFirstName() const {
	return _firstName;
}

const std::string &Contact::getLastName() const {
	return _lastName;
}

const std::string &Contact::getNickname() const {
	return _nickname;
}

int main() {
	Phonebook phonebook;
	int choice;
	std::string firstName, lastName, nickname;

	while (true) {
		phonebook.displayMenu();
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch (choice) {
			case 1:
				std::cout << "Enter First Name: ";
				std::cin >> firstName;
				std::cout << "Enter Last Name: ";
				std::cin >> lastName;
				std::cout << "Enter Nickname: ";
				std::cin >> nickname;
				phonebook.addContact(firstName, lastName, nickname);
				break;
			case 2:
				phonebook.displayContacts();
				break;
			case 3:
				int index;
				std::cout << "Enter contact index to search: ";
				std::cin >> index;
				phonebook.searchContact(index);
				break;
			case 4:
				phonebook.clearContacts();
				break;
			case 5:
				return 0;
			default:
				std::cout << "Invalid choice. Please try again.\n";
		}
	}
}

