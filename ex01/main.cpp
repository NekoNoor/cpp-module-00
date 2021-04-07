/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:17:57 by nschat        #+#    #+#                 */
/*   Updated: 2021/04/07 13:04:46 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

static std::string truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

static std::string g_print_list[11] = {"first name", "last name", "nickname", "login", "postal address", "email address", "phone number", "birthday date", "favorite meal", "underwear color", "darkest secret"};

static Contact add_contact()
{
	Contact contact;
	std::string in_list[11];

	for (unsigned long i = 0; i < sizeof(g_print_list) / sizeof(std::string); i++)
	{
		std::cout << std::setw(17) << g_print_list[i] << ": ";
		std::getline(std::cin, in_list[i]);
	}
	contact.set_all(in_list);
	return (contact);
}

static void print_preview(Contact phonebook[8], int counter)
{
	for (int i = 0; i < counter; i++)
	{
		std::cout << std::setw(10) << i << '|';
		std::cout << std::setw(10) << truncate(phonebook[i].get_firstname()) << '|';
		std::cout << std::setw(10) << truncate(phonebook[i].get_lastname()) << '|';
		std::cout << std::setw(10) << truncate(phonebook[i].get_nickname()) << std::endl;
	}
}

static void print_contact(Contact contact)
{
	std::cout << std::setw(17) << g_print_list[0] << ": " << contact.get_firstname() << std::endl;
	std::cout << std::setw(17) << g_print_list[1] << ": " << contact.get_lastname() << std::endl;
	std::cout << std::setw(17) << g_print_list[2] << ": " << contact.get_nickname() << std::endl;
	std::cout << std::setw(17) << g_print_list[3] << ": " << contact.get_login() << std::endl;
	std::cout << std::setw(17) << g_print_list[4] << ": " << contact.get_postaladdress() << std::endl;
	std::cout << std::setw(17) << g_print_list[5] << ": " << contact.get_emailaddress() << std::endl;
	std::cout << std::setw(17) << g_print_list[6] << ": " << contact.get_phonenumber() << std::endl;
	std::cout << std::setw(17) << g_print_list[7] << ": " << contact.get_birthdaydate() << std::endl;
	std::cout << std::setw(17) << g_print_list[8] << ": " << contact.get_favoritemeal() << std::endl;
	std::cout << std::setw(17) << g_print_list[9] << ": " << contact.get_underwearcolor() << std::endl;
	std::cout << std::setw(17) << g_print_list[10] << ": " << contact.get_darkestsecret() << std::endl;
}

int main(void)
{
	Contact 		phonebook[8];
	unsigned int	counter = 0;

	for (std::string line; std::getline(std::cin, line);)
	{
		if (line.compare("EXIT") == 0)
			break;
		else if (line.compare("ADD") == 0)
		{
			if (counter == 8)
				continue;
			phonebook[counter] = add_contact();	
			counter++;
		}
		else if (line.compare("SEARCH") == 0)
		{
			if (counter == 0)
				continue;
			print_preview(phonebook, counter);
			std::cout << "index: ";
			unsigned int index;
			std::cin >> index;
			if (index < counter)
				print_contact(phonebook[index]);
		}
		continue;
	}
	return (0);
}
