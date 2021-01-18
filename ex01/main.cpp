/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:17:57 by nschat        #+#    #+#                 */
/*   Updated: 2021/01/18 13:16:38 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

int	main(void)
{
	Contact phonebook[8];

	for (std::string line; std::getline(std::cin, line);)
	{
		if (line.compare("EXIT") == 0)
			break;
		if (line.compare("ADD") == 0)
		{
			std::tm bday;
			std::cin >> std::get_time(&bday, "%d-%m-%Y");
			phonebook[0].add_birthdaydate(bday);
			std::cout << phonebook[0].birthdaydate;
		}
		if (line.compare("SEARCH") == 0)
		{
			
		}
		continue;
	}
	return (0);
}
