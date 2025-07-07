/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:47:33 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/07 17:08:42 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

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

void HandleEof(int exite)
{
		if (std::cin.eof())
		{
			std::cout << "\nEOF detected.\n";
			if (exite)
				exit(0);
			else
				return;
		}
}

int main()
{
	signal(SIGINT, signalHandler);

	Phonebook phonebook;
	int choice;

	while (true)
	{
		phonebook.displayMenu();
		std::cout << "Enter your choice: ";

		if (!(std::cin >> choice))
		{
			if (std::cin.eof())
				HandleEof(1);
			else
			{
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				std::cout << "Invalid input. Please enter a number.\n";
				continue;
			}
		}

		std::cin.ignore(10000, '\n');

		switch (choice)
		{
			case 1:
			{
				std::string firstName, lastName, nickname, phonenumber, secret;

				std::cout << "Enter First Name: ";
				if (!std::getline(std::cin, firstName))
				{
					HandleEof(0);
					break;	
				}

				std::cout << "Enter Last Name: ";
				if (!std::getline(std::cin, lastName))
								{
					HandleEof(0);
					break;	
				}

				std::cout << "Enter Nickname: ";
				if (!std::getline(std::cin, nickname))
				{
					HandleEof(0);
					break;	
				}

				std::cout << "Enter Phone Number: ";
				if (!std::getline(std::cin, phonenumber))
				{
					HandleEof(0);
					break;	
				}

				std::cout << "Enter Secret: ";
				if (!std::getline(std::cin, secret))
				{
					HandleEof(0);
					break;	
				}

				if (firstName.empty() || lastName.empty() || nickname.empty() ||
					phonenumber.empty() || secret.empty())
				{
					std::cout << "Error: All fields must be filled. Contact not added.\n";
				}
				else
				{
					phonebook.addContact(firstName, lastName, nickname, phonenumber, secret);
				}
				break;
			}
			case 2:
			{
				if (!phonebook.displayContacts())
					break;

				std::string indexStr;
				int index;

				std::cout << "Enter contact index to search: ";
				if (!std::getline(std::cin, indexStr))
				{
					HandleEof(0);
					break;	
				}

				if (indexStr.empty())
				{
					std::cout << "Invalid contact index.\n";
					break;
				}

				if (indexStr.find_first_not_of("0123456789") != std::string::npos)
				{
					std::cout << "Invalid contact index. Only numbers are allowed.\n";
					break;
				}

				index = std::atoi(indexStr.c_str());
				phonebook.searchContact(index);
				break;
			}
			case 3:
			{
				std::cout << "Exiting phonebook. Goodbye!\n";
				exit(0);
			}
			default:
				std::cout << "Invalid choice. Please try again.\n";
		}
	}
}

