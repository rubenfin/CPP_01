/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 10:41:46 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 11:50:04 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
  private:
	std::string _name;
	Weapon *_weapon;

  public:
    HumanB(const std::string& name);
	~HumanB();
    void setWeapon(Weapon *weapon);
	void attack(void);
};
