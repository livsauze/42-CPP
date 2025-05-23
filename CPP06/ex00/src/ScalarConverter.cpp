/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:18:42 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/23 18:50:57 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isValidInput(std::string str)
{
	int	neg = 0;
	int	f = 0;
	int	d = 0;
	size_t	i = 0;
	
	if (str[i] == '+' || str[i] == '-')
	{
		neg++;
		i++;
	}
	for (; i < str.length(); i++)
	{
		if (neg > 1 || f > 1 || d > 1)
			return false;
		if (str[i] == '.')
			d++;
		else if (str[i] == 'f' || str[i] == 'F')
			f++;
		else if (str[i] == '+' || str[i] == '-')
			neg++;
		else if (!isprint(str[i]))
			return false;
	}
	return true;
}

void	printChar(const std::string& str, bool isLimit)
{
	std::cout << "char : ";
	if (isLimit || !isValidInput(str))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (str.length() == 1 && !std::isdigit(str[0]) && isprint(str[0]))
	{
		std::cout << "'" << str[0] << "'" << std::endl;
		return;
	}
	else if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
	{
		std::cout << str << std::endl;
		return;
	}
	char c = atoi(str.c_str());
	if (isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	return;	
}

void	printInt(const std::string& str, bool isLimit)
{
	std::cout << "int : ";
	if (str.empty() || !isValidInput(str))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (isLimit)
	{
		if (str[0] == 'n')
			std::cout << "nan" << std::endl;
		else if (str[0] == '+')
			std::cout << "+inf" << std::endl;
		else if (str[0] == '-')
			std::cout << "-inf" << std::endl;
		return;
	}
	if (str.length() == 1 && !isdigit(str[0])) {
		int i = static_cast<int>(str[0]);
		std::cout << i << std::endl;
		return;
	}
	else if (str.length() == 3 && !isdigit(str[1]))
	{
		int i = static_cast<int>(str[1]);
		std::cout << i << std::endl;
		return;
	}
	int i = atol(str.c_str());
	if (i > INT_MAX || i < INT_MIN)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << static_cast<int>(i) << std::endl;
	return;
}

void	ScalarConverter::convert(const std::string& str)
{
	std::string	limits[6] = {"+inff", "-inff", "nanf", "+inf", "-inf", "nan"};
	bool		isLimit = false;
	
	for (int i = 0; i < 6; i++)
	{
		if (str == limits[i])
		{
			isLimit = true;
			break;	
		}
	}
	printChar(str, isLimit);
	printInt(str, isLimit);
}