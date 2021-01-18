/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:38:00 by nschat        #+#    #+#                 */
/*   Updated: 2021/01/18 13:14:07 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::add_birthdaydate (std::tm bd)
{
	birthdaydate = bd;
}

void Contact::add_info (std::string fn, std::string ln, std::string nn, std::string l, std::string pa, std::string ea, std::string pn, std::tm bd, std::string fm, std::string uc, std::string ds)
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
