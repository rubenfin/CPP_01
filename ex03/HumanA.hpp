/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 10:41:43 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 11:41:55 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
  private:
	std::string _name;
	Weapon &_weapon;

  public:
	 HumanA(const std::string& name, Weapon& weapon);
	~HumanA();
	void attack(void);
};
