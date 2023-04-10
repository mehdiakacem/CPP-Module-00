/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:51:22 by makacem           #+#    #+#             */
/*   Updated: 2023/04/10 06:26:16 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int	i;
	char	c;
	std::string	str;

	i = 1;
	c = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			str = *(argv + i);
			for (int i=0; i<(int)str.length(); ++i)
			{
				c = toupper(str[i]);
				std::cout << c;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}

