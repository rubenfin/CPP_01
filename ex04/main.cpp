/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/23 11:58:38 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/03/23 16:37:38 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string replace_words(data mydata)
{
	int				i;
	unsigned long	x;
	int				y;

	i = 0;
	std::string outputString;
	x = 0;
	y = i;
	while (mydata.fileContent[i])
	{
		x = 0;
		for (; mydata.fileContent[i] == mydata.s1[x]; i++, x++)
			;
		if (x == mydata.s1.length())
			outputString += mydata.s2;
		else
			i -= x;
		outputString += mydata.fileContent[i];
		i++;
	}
	return (outputString);
}

void	putStringInFile(data mydata, std::string outputString)
{
	std::ofstream outputFile;
	try
	{
		outputFile.open(mydata.filename += ".replace");
		if (outputFile.fail())
		{
			throw std::runtime_error("Error making output file.");
		}
		outputFile << outputString;
		outputFile.close();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	return ;
}

int	main(int ac, char **av)
{
	data	mydata;

	std::string outputString;
	if (ac == 4)
	{
		mydata = {"", "", "", ""};
		handleInput(av, mydata);
		outputString = replace_words(mydata);
		putStringInFile(mydata, outputString);
		return (0);
	}
	else
		std::cerr << "usage: <filename> <s1> <s2>" << std::endl;
	return(1);
}
