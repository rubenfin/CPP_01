/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 10:41:53 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 11:17:07 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
  private:
	std::string _type;

  public:
	Weapon();
	Weapon(const std::string &type);
	~Weapon();
	const std::string &getType();
	void setType(const std::string &type);
};
