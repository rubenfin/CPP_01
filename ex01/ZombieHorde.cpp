/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 16:20:23 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/22 16:59:09 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        Horde[i].setName(name);
    }
    return(Horde);
}