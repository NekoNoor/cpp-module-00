/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/18 12:28:35 by nschat        #+#    #+#                 */
/*   Updated: 2021/01/21 13:54:27 by nschat        ########   odam.nl         */
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
		std::string	birthdaydate;
		std::string	favoritemeal;
		std::string	underwearcolor;
		std::string	darkestsecret;

	public:
		void set_all (std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
		std::string	get_firstname (void);
		std::string	get_lastname (void);
		std::string	get_nickname (void);
		std::string	get_login (void);
		std::string	get_postaladdress (void);
		std::string	get_emailaddress (void);
		std::string	get_phonenumber (void);
		std::string	get_birthdaydate (void);
		std::string	get_favoritemeal (void);
		std::string	get_underwearcolor (void);
		std::string	get_darkestsecret (void);
};
