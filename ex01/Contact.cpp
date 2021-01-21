/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:38:00 by nschat        #+#    #+#                 */
/*   Updated: 2021/01/21 13:54:21 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Contact.hpp"

void 		Contact::set_all (std::string fn, std::string ln, std::string nn, std::string l, std::string pa, std::string ea, std::string pn, std::string bd, std::string fm, std::string uc, std::string ds)
{
	firstname = fn;
	lastname = ln;
	nickname = nn;
	login = l;
	postaladdress = pa;
	emailaddress = ea;
	phonenumber = pn;
	birthdaydate = bd;
	favoritemeal = fm;
	underwearcolor = uc;
	darkestsecret  = ds;
}

std::string	Contact::get_firstname (void)
{
	return (this->firstname);
}

std::string	Contact::get_lastname (void)
{
	return (this->lastname);
}

std::string	Contact::get_nickname (void)
{
	return (this->nickname);
}

std::string	Contact::get_login (void)
{
	return (this->login);
}

std::string	Contact::get_postaladdress (void)
{
	return (this->postaladdress);
}

std::string	Contact::get_emailaddress (void)
{
	return (this->emailaddress);
}

std::string	Contact::get_phonenumber (void)
{
	return (this->phonenumber);
}

std::string	Contact::get_birthdaydate (void)
{
	return (this->birthdaydate);
}

std::string	Contact::get_favoritemeal (void)
{
	return (this->favoritemeal);
}

std::string	Contact::get_underwearcolor (void)
{
	return (this->underwearcolor);
}

std::string	Contact::get_darkestsecret (void)
{
	return (this->darkestsecret);
}
