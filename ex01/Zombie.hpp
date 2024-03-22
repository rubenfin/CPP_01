/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 16:20:25 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/22 17:02:19 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _name;

public:
    Zombie();
    Zombie(const std::string &name);
    ~Zombie();
    void setName(const std::string name);
    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);
