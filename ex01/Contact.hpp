/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:00:38 by makacem           #+#    #+#             */
/*   Updated: 2023/04/10 22:29:59 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void    setFirstName(std::string str) {
            first_name = str;
        }
        void    setLastName(std::string str) {
            last_name = str;
        }
        void    setNickName(std::string str) {
            nick_name = str;
        }
        void    setPhoneNumber(std::string str) {
            phone_number = str;
        }
        void    setDarkestSecret(std::string str) {
            darkest_secret = str;
        }
        std::string getFirstName() {
            return first_name;
        }
        std::string getLastName() {
            return last_name;
        }
        std::string getNickName() {
            return nick_name;
        }
        std::string getPhoneNumber() {
            return phone_number;
        }
        std::string getDarkestSecret() {
            return darkest_secret;
        }
};


#endif