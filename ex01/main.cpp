/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:17:57 by nschat        #+#    #+#                 */
/*   Updated: 2021/01/25 12:16:21 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

int	main(void)
{
	Contact phonebook[8];
	int		i = 0;

	for (std::string line; std::getline(std::cin, line);)
	{
		if (line.compare("EXIT") == 0)
			break;
		else if (line.compare("ADD") == 0)
		{
			std::string fn, ln, nn, l, pa, ea, pn, bd, fm, uc, ds;

			std::cout << "Enter first name:" << std::endl;
			std::getline(std::cin, fn);
			std::cout << "Enter last name:" << std::endl;
			std::getline(std::cin, ln);
			std::cout << "Enter nickname:" << std::endl;
			std::getline(std::cin, nn);
			std::cout << "Enter login:" << std::endl;
			std::getline(std::cin, l);
			std::cout << "Enter postal address:" << std::endl;
			std::getline(std::cin, pa);
			std::cout << "Enter email address:" << std::endl;
			std::getline(std::cin, ea);
			std::cout << "Enter phone number:" << std::endl;
			std::getline(std::cin, pn);
			std::cout << "Enter birthday date:" << std::endl;
			std::getline(std::cin, bd);
			std::cout << "Enter favorite meal:" << std::endl;
			std::getline(std::cin, fm);
			std::cout << "Enter underwear color:" << std::endl;
			std::getline(std::cin, uc);
			std::cout << "Enter darkest secret:" << std::endl;
			std::getline(std::cin, ds);
			phonebook[i].set_all(fn, ln, nn, l, pa, ea, pn, bd, fm, uc, ds);
			if (i < 8)
				i++;
			else
				i = 0;
		}
		else if (line.compare("SEARCH") == 0)
		{
			for (int j = 0; j < 8; j++)
			{
				std::cout << j << std::endl;
				std::cout << phonebook[j].get_firstname() << std::endl;
				std::cout << phonebook[j].get_lastname() << std::endl;
				std::cout << phonebook[j].get_nickname() << std::endl;
				std::cout << phonebook[j].get_login() << std::endl;
				std::cout << phonebook[j].get_postaladdress() << std::endl;
				std::cout << phonebook[j].get_emailaddress() << std::endl;
				std::cout << phonebook[j].get_phonenumber() << std::endl;
				std::cout << phonebook[j].get_birthdaydate() << std::endl;
				std::cout << phonebook[j].get_favoritemeal() << std::endl;
				std::cout << phonebook[j].get_underwearcolor() << std::endl;
				std::cout << phonebook[j].get_darkestsecret() << std::endl;
			}
		}
		continue;
	}
	return (0);
}
