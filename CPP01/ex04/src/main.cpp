/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:06:11 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/18 15:27:32 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	checkInput(std::string& filename, std::string& s1, std::string& s2)
{
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cerr << "Error : filename, s1 or s2 cannot be empty" << std::endl;
		return (1);
	}
	return (0);
}
void	replace(std::string& line, std::string& s1, std::string& s2)
{
	size_t pos;
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}

}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error : Invalid arguments please enter ./sed <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	if (checkInput(filename, s1, s2))
		return (1);
	// Creating inputFile
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error : cannot open " << filename << std::endl;
		return (1);
	}
	// Creating outFile
	filename += ".replace";
	std::ofstream outFile(filename.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error : cannot open " << filename << std::endl;
		inputFile.close();
		return (1);
	}
	// Replace line by line
	std::string line;
	while (std::getline(inputFile, line))
	{
		replace(line, s1, s2);
		outFile << line << std::endl;
	}
	inputFile.close();
	outFile.close();
	return (0);
}