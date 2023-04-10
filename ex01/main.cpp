/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:09:58 by makacem           #+#    #+#             */
/*   Updated: 2023/04/10 22:59:52 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook   phonebook;
    Contact     contact;
    std::string cmd;
    static int  i;
    int nbr;
    std::string index;
    std::string str;

    phonebook.setNbrofContacts(0);
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
            getline(std::cin, str);
            contact.setFirstName(str);
            
            std::cout << "Enter last name: ";
            getline(std::cin, str);
            contact.setLastName(str);
            
            std::cout << "Enter nick name: ";
            getline(std::cin, str);
            contact.setNickName(str);
            
            std::cout << "Enter phone number: ";
            getline(std::cin, str);
            contact.setPhoneNumber(str);
            
            std::cout << "Enter darkest secret: ";
            getline(std::cin, str);
            contact.setDarkestSecret(str);
            
            if (contact.getFirstName().length() > 0 && contact.getLastName().length() > 0
            && contact.getNickName().length() > 0 && contact.getPhoneNumber().length() > 0
            && contact.getDarkestSecret().length() > 0)
            {
                if (phonebook.getNbrofContacts() < 8)
                {
                    nbr = phonebook.getNbrofContacts();
                    nbr++;
                    phonebook.setNbrofContacts(nbr);
                    
                }
                phonebook.setContact(contact, i);
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
            for (int i = 0; i < phonebook.getNbrofContacts(); i++)
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
