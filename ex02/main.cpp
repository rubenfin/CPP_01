/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/22 17:01:25 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 10:44:21 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "The memory address of string: " << &string << std::endl;
    std::cout << "The memory held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory held by stringREF: " << &stringREF << std::endl;

    std::cout << "The value of string:              " << string << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}