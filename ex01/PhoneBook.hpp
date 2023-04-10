/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:53:13 by makacem           #+#    #+#             */
/*   Updated: 2023/04/10 22:51:22 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        int nbrof_contacts;
    public:
        void    ft_print_firstname(int index);
        void    ft_print_lastname(int index);
        void    ft_print_nickname(int index);
        void    ft_print_contact(std::string input_index);
        void    setContact(Contact newContact, int index) {
            contact[index] = newContact;
        }
        void    setNbrofContacts(int nbr) {
            nbrof_contacts = nbr;
        }
        int     getNbrofContacts() {
            return nbrof_contacts;
        }

};

#endif