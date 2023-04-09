/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:53:13 by makacem           #+#    #+#             */
/*   Updated: 2023/04/08 22:04:12 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
    public:
        Contact contact[8];
        int nbrof_contacts;
        void    ft_print_firstname(int index);
        void    ft_print_lastname(int index);
        void    ft_print_nickname(int index);
        void    ft_print_contact(std::string input_index);

};

#endif