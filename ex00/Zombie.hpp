/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 13:17:04 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/22 16:04:59 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <cctype>
#include <iostream>

class Zombie
{
  private:
	std::string _name;

  public:
	Zombie();
	Zombie(const std::string &name);
	~Zombie();
	void announce(void);
};

Zombie	*newZombie(const std::string &name);
void	randomChump(const std::string &name);

#endif