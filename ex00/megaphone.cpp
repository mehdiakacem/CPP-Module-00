/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:51:22 by makacem           #+#    #+#             */
/*   Updated: 2023/04/09 21:05:24 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int	i;
	char	c;
	char	*text;

	i = 1;
	c = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			text = *(argv + i);
			while (*text != '\0')
			{
				c = toupper(*text);
				std::cout << c;
				text++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}

