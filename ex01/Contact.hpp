/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:28:35 by nschat        #+#    #+#                 */
/*   Updated: 2021/01/18 13:19:34 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	login;
		std::string	postaladdress;
		std::string	emailaddress;
		std::string	phonenumber;
		std::tm		birthdaydate;
		std::string	favoritemeal;
		std::string	underwearcolor;
		std::string	darkestsecret;

	public:
		void add_birthdaydate (std::tm);
		void add_info (std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::tm, std::string, std::string, std::string);
		std::string get_firstname;
};
