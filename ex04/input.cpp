/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 12:06:03 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 15:27:03 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string readFromInfile(std::ifstream &inputFile)
{
	std::string oneLine;
	std::string readFile;
	while (std::getline(inputFile, oneLine))
	{
		readFile += oneLine;
		readFile += '\n';
	}
	inputFile.close();
	if (readFile == "")
		return ("");
	if (oneLine.back() == '\n')
		readFile.pop_back();
	return (readFile);
}

void	handleInput(char **av, data &mydata)
{
	std::ifstream inputFile;

	if (!av[1] || !av[2] || !av[3])
		exit(EXIT_FAILURE);

	mydata.filename = av[1];
	mydata.s1 = av[2];
	mydata.s2 = av[3];

	try
	{
		inputFile.open(mydata.filename);
		if (inputFile.fail())
			throw std::runtime_error("Error opening input file.");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		exit(EXIT_FAILURE);
	}
	mydata.fileContent = readFromInfile(inputFile);
	return ;
}