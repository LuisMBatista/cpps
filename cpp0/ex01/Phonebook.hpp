/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:47:47 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/03 16:18:02 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <string>
#include <iostream>

class Phonebook {
public:
	
	Phonebook();
	~Phonebook();
	void displayMenu() const;
	void addContact(const std::string &firstName, const std::string &lastName, const std::string &nickname, 
					const std::string &phonenumber, const std::string &secret);
	bool displayContacts() const;
	void searchContact(int index) const;
private:
	Contact _contacts[3]; // Array to Contact objects
	int _index;            // Current index for adding new contacts
	int _size;             // Current number of contacts in the phonebook
};

#endif // PHONEBOOK_HPP
