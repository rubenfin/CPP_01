/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 10:41:41 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 11:51:07 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
	if (_weapon.getType() == "")
		std::cout << _name << " attacks with nothing ?????" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name),
	_weapon(weapon)
{
}

HumanA::~HumanA()
{
}