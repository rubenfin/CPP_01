/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 13:17:10 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/22 16:19:35 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie;

    randomChump("Johnny");
    
	zombie = newZombie("hallo");
    zombie->announce();
    delete zombie;
	return (0);
}