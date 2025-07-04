/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:47:33 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/03 21:37:37 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>


Contact::Contact() : _firstName(""), _lastName(""), _nickname(""), _phonenumber(""), _secret(""){}
Contact::Contact(const std::string &firstName, const std::string &lastName, const std::string &nickname, const std::string &phonenumber, const std::string &secret)
	: _firstName(firstName), _lastName(lastName), _nickname(nickname), _phonenumber(phonenumber), _secret(secret) {}

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

const std::string &Contact::getPhoneNumber() const {
	return _phonenumber;
}
const std::string &Contact::getSecret() const {
	return _secret;
}
int main() {
	Phonebook phonebook;
	int choice;
	std::string firstName, lastName, nickname, phonenumber, secret;

	while (true) {
		phonebook.displayMenu();
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch (choice) {
			case 1:
				{
				std::string firstName, lastName, nickname, phonenumber, secret;

				std::cin.ignore();
				std::cout << "Enter First Name: ";
				std::getline(std::cin, firstName);

				std::cout << "Enter Last Name: ";
				std::getline(std::cin, lastName);

				std::cout << "Enter Nickname: ";
				std::getline(std::cin, nickname);

				std::cout << "Enter Phone Number: ";
				std::getline(std::cin, phonenumber);

				std::cout << "Enter Secret: ";
				std::getline(std::cin, secret);

				if (firstName.empty() || lastName.empty() || nickname.empty() ||
					phonenumber.empty() || secret.empty())
				{
					std::cout << "Error: All fields must be filled. Contact not added." << std::endl;
				}
				else
				{
					phonebook.addContact(firstName, lastName, nickname, phonenumber, secret);
				}

				break;
}
			case 2:
				if (!phonebook.displayContacts())
					break;
				int index;
				std::cout << "Enter contact index to search: ";
				std::cin >> index;
				phonebook.searchContact(index);
				break;
			case 3:
				return 0;
			default:
				std::cout << "Invalid choice. Please try again.\n";
		}
	}
}

