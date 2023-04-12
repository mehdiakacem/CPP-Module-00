/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:50:00 by makacem           #+#    #+#             */
/*   Updated: 2023/04/12 00:54:34 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setFirstName(std::string str) {
    first_name = str;
}

void    Contact::setLastName(std::string str) {
    last_name = str;
}

void    Contact::setNickName(std::string str) {
    nick_name = str;
}

void    Contact::setPhoneNumber(std::string str) {
    phone_number = str;
}

void    Contact::setDarkestSecret(std::string str) {
    darkest_secret = str;
}

std::string Contact::getFirstName() {
    return first_name;
}

std::string Contact::getLastName() {
    return last_name;
}

std::string Contact::getNickName() {
    return nick_name;
}

std::string Contact::getPhoneNumber() {
    return phone_number;
}

std::string Contact::getDarkestSecret() {
    return darkest_secret;
}