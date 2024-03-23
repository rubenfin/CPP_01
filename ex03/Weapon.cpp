/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 10:41:51 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 11:17:03 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(const std::string& type)
{
    _type = type;
}

const std::string& Weapon::getType()
{
    return(_type);
}

Weapon::Weapon()
{
    _type = "knife";
}

Weapon::Weapon(const std::string& type)
{
    _type = type;
}

Weapon::~Weapon()
{
}