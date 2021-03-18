/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:38:00 by nschat        #+#    #+#                 */
/*   Updated: 2021/03/18 15:06:41 by nekonoor      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Contact.hpp"

void Contact::set_all (std::string input[11])
{
	firstname = input[0];
	lastname = input[1];
	nickname = input[2];
	login = input[3];
	postaladdress = input[4];
	emailaddress = input[5];
	phonenumber = input[6];
	birthdaydate = input[7];
	favoritemeal = input[8];
	underwearcolor = input[9];
	darkestsecret  = input[10];
}

std::string Contact::get_firstname (void)
{
	return (this->firstname);
}

std::string Contact::get_lastname (void)
{
	return (this->lastname);
}

std::string Contact::get_nickname (void)
{
	return (this->nickname);
}

std::string Contact::get_login (void)
{
	return (this->login);
}

std::string Contact::get_postaladdress (void)
{
	return (this->postaladdress);
}

std::string Contact::get_emailaddress (void)
{
	return (this->emailaddress);
}

std::string Contact::get_phonenumber (void)
{
	return (this->phonenumber);
}

std::string Contact::get_birthdaydate (void)
{
	return (this->birthdaydate);
}

std::string Contact::get_favoritemeal (void)
{
	return (this->favoritemeal);
}

std::string Contact::get_underwearcolor (void)
{
	return (this->underwearcolor);
}

std::string Contact::get_darkestsecret (void)
{
	return (this->darkestsecret);
}
