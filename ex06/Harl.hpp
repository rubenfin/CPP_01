/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 15:30:33 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 16:51:41 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

enum Harl_level
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    ELSE
};

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    Harl();
    ~Harl();
    void complain(std::string level);
};

