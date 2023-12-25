/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:34:02 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/08/15 10:06:49 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include<iostream>
#include<string>

class Harl{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        
    public:
        Harl(void);
        ~Harl(void);
        void complain( std::string level);
};

typedef void (Harl::*ftoptr) ();

#endif