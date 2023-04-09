/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:09:58 by makacem           #+#    #+#             */
/*   Updated: 2023/04/09 21:36:24 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook   phonebook;
    Contact     contact;
    std::string cmd;
    static int  i;
    std::string index;

    phonebook.nbrof_contacts = 0;
    while (cmd != "EXIT")
    {
        std::cout << "Enter: ADD to save new contact, SEARCH to display a specifix contact or EXIT to exit:\n";
        getline(std::cin, cmd);
        if(!std::cin)
        {
            std::cout << "failure\n";
            exit(0);
        }
        if (cmd == "ADD")
        {
            std::cout << "Enter first name: ";
            getline(std::cin, contact.first_name);
            std::cout << "Enter last name: ";
            getline(std::cin, contact.last_name);
            std::cout << "Enter nick name: ";
            getline(std::cin, contact.nick_name);
            std::cout << "Enter phone number: ";
            getline(std::cin, contact.phone_number);
            std::cout << "Enter darkest secret: ";
            getline(std::cin, contact.darkest_secret);
            if (contact.first_name.length() > 0 && contact.last_name.length() > 0
            && contact.nick_name.length() > 0 && contact.phone_number.length() > 0
            && contact.darkest_secret.length() > 0)
            {
                if (phonebook.nbrof_contacts < 8)
                    phonebook.nbrof_contacts++;
                phonebook.contact[i] = contact;
                i++;
                if (i == 8 )
                    i = 0;   
            }
        }
        else if (cmd == "SEARCH")
        {
            std::cout.width(10);
            std::cout.fill(' ');
            std::cout << "index" << "|";
            std::cout.width(10);
            std::cout.fill(' ');
            std::cout << "first name" << "|";
            std::cout.width(10);
            std::cout.fill(' ');
            std::cout << "last name" << "|";
            std::cout.width(10);
            std::cout.fill(' ');
            std::cout << "nick name" << "|";
            std::cout << std::endl;
            for (int i = 0; i < phonebook.nbrof_contacts; i++)
            {
                std::cout.width(10);
                std::cout.fill(' ');
                std::cout << i << "|";
                phonebook.ft_print_firstname(i);
                phonebook.ft_print_lastname(i);
                phonebook.ft_print_nickname(i);
            }
            std::cout << std::endl << "Enter index of contact to display: ";
            getline(std::cin, index);
            phonebook.ft_print_contact(index);
        }
    }
}
