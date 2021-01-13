/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 21:20:22 by nschat        #+#    #+#                 */
/*   Updated: 2021/01/13 21:43:58 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*scream(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
		s[i] = std::toupper(s[i]);
	return (s);
}

int 	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
		std::cout << scream(av[i]);
	std::cout << std::endl;
	return (0);
}
