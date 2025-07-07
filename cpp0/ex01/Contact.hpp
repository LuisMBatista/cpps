/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:02:52 by lumiguel          #+#    #+#             */
/*   Updated: 2025/07/07 15:29:51 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP	
#include <string>
#include <iostream>
#include <csignal>
#include <cstdlib>

class Contact {
public:
	Contact();
	Contact(const std::string &firstName, const std::string &lastName, const std::string &nickname, 
			const std::string &phonenumber, const std::string &secret);
	~Contact();
	const std::string &getFirstName() const;
	const std::string &getLastName() const;
	const std::string &getNickname() const;
	const std::string &getPhoneNumber() const;
	const std::string &getSecret() const;
	
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phonenumber;
	std::string _secret;
};

#endif // CONTACT_HPP
