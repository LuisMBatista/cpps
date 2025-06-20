/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:02:52 by lumiguel          #+#    #+#             */
/*   Updated: 2025/06/20 15:25:13 by lumiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP	
#include <string>
#include <iostream>

class Contact {
public:
	Contact(const std::string &firstName, const std::string &lastName, const std::string &nickname);
	~Contact();
	const std::string &getFirstName() const;
	const std::string &getLastName() const;
	const std::string &getNickname() const;
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
};

#endif // CONTACT_HPP
