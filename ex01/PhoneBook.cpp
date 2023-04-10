/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:59:40 by makacem           #+#    #+#             */
/*   Updated: 2023/04/10 22:34:19 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::ft_print_firstname(int index)
{
    if (contact[index].getFirstName().length() > 10)
        std::cout << contact[index].getFirstName().substr(0, 9) << "." << "|";
    else
    {
        std::cout.width(10);
        std::cout.fill(' ');
        std::cout << contact[index].getFirstName() << "|";
    }
}

void    PhoneBook::ft_print_lastname(int index)
{
    if (contact[index].getLastName().length() > 10)
        std::cout << contact[index].getLastName().substr(0, 9) << "." << "|";
    else
    {
        std::cout.width(10);
        std::cout.fill(' ');
        std::cout << contact[index].getLastName() << "|";
    }
}

void    PhoneBook::ft_print_nickname(int index)
{
    if (contact[index].getNickName().length() > 10)
        std::cout << contact[index].getNickName().substr(0, 9) << "." << "|" << std::endl;
    else
    {
        std::cout.width(10);
        std::cout.fill(' ');
        std::cout << contact[index].getNickName() << "|" << std::endl;
    }
}

void    PhoneBook::ft_print_contact(std::string input_index)
{
    int size;
    int i;

    size = input_index.length();
    char    index[size];
    if (size == 0)
    {
        std::cout << "Error: Invalid index.\n";
        return;
    }
    for(int i=0; i<size; i++)
    {
        index[i] = input_index[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (!(isdigit(index[i])))
        {
            std::cout << "Error: Invalid index.\n";
            return;
        }
    }
    i = atoi(index);
    if (i < nbrof_contacts && i >= 0)
    {
        std::cout << "First name    : " << contact[i].getFirstName() << std::endl;
        std::cout << "Last name     : " << contact[i].getLastName() << std::endl;
        std::cout << "Nick name     : " << contact[i].getNickName() << std::endl;
        std::cout << "Phone number  : " << contact[i].getPhoneNumber() << std::endl;
        std::cout << "Darkest secret: " << contact[i].getDarkestSecret() << std::endl;
    }
    else
        std::cout << "index not found" << std::endl;
}