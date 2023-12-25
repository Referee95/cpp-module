/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:07:13 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/04 13:15:54 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include<iostream>

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        
        std::string g_f_name();
        std::string g_l_name();
        std::string g_n_name();
        std::string g_p_nbr();
        std::string g_d_s();
        
        void   f_namee(std::string f_name);
        void   l_namee(std::string l_name);
        void   n_namee(std::string n_name);
        void   phone_nbr(std::string phone_n);
        void   darkest(std::string darkest_s);
        int contactindex;

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};
#endif