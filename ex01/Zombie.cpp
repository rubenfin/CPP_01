/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 16:20:27 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/22 16:58:17 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string name)
{
    _name = name;
}

Zombie::Zombie(const std::string &name)
{ 
    _name = name;
    std::cout << _name << " has been made!" << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

