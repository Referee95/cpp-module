/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:56:26 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/05 18:47:10 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
#include <iomanip>
#include<iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contacet[8];
        int index;
        int count;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void add_c();
        void src();
        std::string format(const std::string& text);
        std::string check(std::string str);
};
#endif