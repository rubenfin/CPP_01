/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 12:01:00 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 13:53:31 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <limits>
#include <cstring>

typedef struct data
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string fileContent;
}	data;

void handleInput(char **av, data &mydata);

