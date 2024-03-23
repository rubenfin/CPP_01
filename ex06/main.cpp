/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 15:30:27 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 16:52:36 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	std::string level;
    Harl harl;
	if (ac == 2)
	{
		if (av[1])
			level = av[1];
        harl.complain(level);
	}
	else
		std::cerr << "usage: ./harlFilter <level>" << std::endl;

	return (0);
}