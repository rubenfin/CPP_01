/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 16:20:29 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/22 17:00:17 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Horde;

    Horde = zombieHorde(5, "Henk");
    
    for (size_t i = 0; i < 5; i++)
    {
        Horde[i].announce();
    }
    
    delete[] Horde;
    return (0);
}