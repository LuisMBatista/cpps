/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:47:47 by lumiguel          #+#    #+#             */
/*   Updated: 2025/06/20 12:16:43 by lumiguel         ###   ########.fr       */
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
	void addContact(const std::string &firstName, const std::string &lastName, const std::string &nickname);
	void displayContacts() const;
	void searchContact(int index) const;
	void clearContacts();
private:
	Contact *_contacts[8]; // Array of pointers to Contact objects
	int _index;            // Current index for adding new contacts
	int _size;             // Current number of contacts in the phonebook
};

#endif // PHONEBOOK_HPP
