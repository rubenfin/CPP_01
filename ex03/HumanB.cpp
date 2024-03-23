/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 10:41:39 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 11:50:45 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void)
{
    if (_weapon->getType() == "")
        std::cout << _name << " attacks with nothing ?????" << std::endl;
    else
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon *weapon)
{
    _weapon = weapon;
}


HumanB::HumanB(const std::string& name)
{
    _name = name;
}

HumanB::~HumanB()
{
}