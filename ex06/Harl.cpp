/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 15:30:43 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 16:55:13 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout << "I really do!\n" << std::endl;
}
void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. " << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month.\n" << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
	
}

void	setEnum(std::string level, Harl_level &lvl)
{
	if (level == "DEBUG")
		lvl = DEBUG;
	else if (level == "INFO")
		lvl = INFO;
	else if (level == "WARNING")
		lvl = WARNING;
	else if (level == "ERROR")
		lvl = ERROR;
	else
		lvl = ELSE;
}

void Harl::complain(std::string level)
{
	Harl_level	lvl;

	setEnum(level, lvl);
	switch (lvl)
	{
	case DEBUG:
		debug();
		break ;
	case INFO:
		debug();
		info();
		break ;
	case WARNING:
		debug();
		info();
		warning();
		break ;
	case ERROR:
		debug();
		info();
		warning();
		error();
		break ;
	default:
		std::cout << "\"some useless complaining\"" << std::endl;
		break ;
	}
}

Harl::Harl()
{
}
Harl::~Harl()
{
	
}