/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:59:40 by makacem           #+#    #+#             */
/*   Updated: 2023/04/08 22:04:15 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::ft_print_firstname(int index)
{
    if (contact[index].first_name.length() > 10)
        std::cout << contact[index].first_name.substr(0, 9) << "." << "|";
    else
    {
        std::cout.width(10);
        std::cout.fill(' ');
        std::cout << contact[index].first_name << "|";
    }
}

void    PhoneBook::ft_print_lastname(int index)
{
    if (contact[index].last_name.length() > 10)
        std::cout << contact[index].last_name.substr(0, 9) << "." << "|";
    else
    {
        std::cout.width(10);
        std::cout.fill(' ');
        std::cout << contact[index].last_name << "|";
    }
}

void    PhoneBook::ft_print_nickname(int index)
{
    if (contact[index].nick_name.length() > 10)
        std::cout << contact[index].nick_name.substr(0, 9) << "." << "|" << std::endl;
    else
    {
        std::cout.width(10);
        std::cout.fill(' ');
        std::cout << contact[index].nick_name << "|" << std::endl;
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
        std::cout << "First name    : " << contact[i].first_name << std::endl;
        std::cout << "Last name     : " << contact[i].last_name << std::endl;
        std::cout << "Nick name     : " << contact[i].nick_name << std::endl;
        std::cout << "Phone number  : " << contact[i].phone_number << std::endl;
        std::cout << "Darkest secret: " << contact[i].darkest_secret << std::endl;
    }
    else
        std::cout << "index not found" << std::endl;
}