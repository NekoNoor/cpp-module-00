/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:17:57 by nschat        #+#    #+#                 */
/*   Updated: 2021/01/25 13:15:40 by nschat        ########   odam.nl         */
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
	std::string fn, ln, nn, l, pa, ea, pn, bd, fm, uc, ds;

	std::cout << std::setw(17) << "first name: ";
	std::getline(std::cin, fn);
	std::cout << std::setw(17) << "last name: ";
	std::getline(std::cin, ln);
	std::cout << std::setw(17) << "nickname: ";
	std::getline(std::cin, nn);
	std::cout << std::setw(17) << "login: ";
	std::getline(std::cin, l);
	std::cout << std::setw(17) << "postal address: ";
	std::getline(std::cin, pa);
	std::cout << std::setw(17) << "email address: ";
	std::getline(std::cin, ea);
	std::cout << std::setw(17) << "phone number: ";
	std::getline(std::cin, pn);
	std::cout << std::setw(17) << "birthday date: ";
	std::getline(std::cin, bd);
	std::cout << std::setw(17) << "favorite meal: ";
	std::getline(std::cin, fm);
	std::cout << std::setw(17) << "underwear color: ";
	std::getline(std::cin, uc);
	std::cout << std::setw(17) << "darkest secret: ";
	std::getline(std::cin, ds);
	contact.set_all(fn, ln, nn, l, pa, ea, pn, bd, fm, uc, ds);
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
