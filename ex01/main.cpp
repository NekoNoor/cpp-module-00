/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:17:57 by nschat        #+#    #+#                 */
/*   Updated: 2021/03/18 14:40:21 by nekonoor      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

static std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}


static Contact		add_contact()
{
	Contact contact;
	std::string in_list[11];
	static std::string print_list[11] {"first name: ", "last name: ", "nickname: ", "login: ", "postal address: ", "email address: ", "phone number: ", "birthday date: ", "favorite meal: ", "underwear color: ", "darkest secret: "};

	for (unsigned long i = 0; i < sizeof(print_list) / sizeof(std::string); i++)
	{
		std::cout << std::setw(17) << print_list[i];
		std::getline(std::cin, in_list[i]);
	}
	contact.set_all(in_list);
	return (contact);
}

static void			print_preview(Contact phonebook[8], int counter)
{
	for (int i = 0; i < counter; i++)
	{
		std::cout << std::setw(10) << i << '|';
		std::cout << std::setw(10) << truncate(phonebook[i].get_firstname()) << '|';
		std::cout << std::setw(10) << truncate(phonebook[i].get_lastname()) << '|';
		std::cout << std::setw(10) << truncate(phonebook[i].get_nickname()) << std::endl;
	}
}

static void			print_contact(Contact contact)
{
	std::cout << std::setw(17) << "first name: " << contact.get_firstname() << std::endl;
	std::cout << std::setw(17) << "last name: " << contact.get_lastname() << std::endl;
	std::cout << std::setw(17) << "nickname: " << contact.get_nickname() << std::endl;
	std::cout << std::setw(17) << "login: " << contact.get_login() << std::endl;
	std::cout << std::setw(17) << "postal address: " << contact.get_postaladdress() << std::endl;
	std::cout << std::setw(17) << "email address: " << contact.get_emailaddress() << std::endl;
	std::cout << std::setw(17) << "phone number: " << contact.get_phonenumber() << std::endl;
	std::cout << std::setw(17) << "birthday date: " << contact.get_birthdaydate() << std::endl;
	std::cout << std::setw(17) << "favorite meal: " << contact.get_favoritemeal() << std::endl;
	std::cout << std::setw(17) << "underwear color: " << contact.get_underwearcolor() << std::endl;
	std::cout << std::setw(17) << "darkest secret: " << contact.get_darkestsecret() << std::endl;
}

int					main(void)
{
	Contact phonebook[8];
	int		counter = 0;

	for (std::string line; std::getline(std::cin, line);)
	{
		if (line.compare("EXIT") == 0)
			break;
		else if (line.compare("ADD") == 0)
		{
			phonebook[counter] = add_contact();
			if (counter < 8)
				counter++;
		}
		else if (line.compare("SEARCH") == 0)
		{
			print_preview(phonebook, counter);
			std::cout << "index: ";
			int index;
			std::cin >> index;
			print_contact(phonebook[index]);
		}
		continue;
	}
	return (0);
}
