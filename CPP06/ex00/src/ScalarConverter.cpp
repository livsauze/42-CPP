/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:18:42 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/27 16:18:15 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


void	ScalarConverter::convert(const std::string& str)
{
	bool	isPseudoF = (str == "-inff" || str == "+inff" || str == "nanf");
	bool	isPseudoD = (str == "-inf" || str == "+inf" || str == "nan");
	char	*endPtr;
	char	cval;
	int		ival;
	float	fval;
	double	dval;
	long	lval;
	
	errno = 0;
	if (isPseudoF || isPseudoD)
	{
		fval = std::strtof(str.c_str(), &endPtr);
		dval = std::strtod(str.c_str(), &endPtr);
		std::cout << "char : Impossible" << std::endl;
		std::cout << "int : Impossible" << std::endl;
		std::cout << "float : " << fval << "f" << std::endl;
		std::cout << "double : " << dval << std::endl;
		
	}
	// If char detected
	if (str.length() == 1 && !isdigit(str[0]) && isprint(str[0]))
	{
		cval = str[0];
		ival = static_cast<int>(cval);
		fval = static_cast<float>(cval);
		dval = static_cast<double>(cval);
		std::cout << "char : '" << cval << "'" << std::endl;
		std::cout << "int : '" << ival << "'" << std::endl;
		std::cout << "float : '" << fval << "'" << std::endl;
		std::cout << "double : '" << dval << "'" << std::endl;
		return;
	}
	// Hadling simple quotes for char
	else if (str.length() == 3 && str[0] == '\'' && isprint(str[1]))
	{
		cval = str[1];
		ival = static_cast<int>(cval);
		fval = static_cast<float>(cval);
		dval = static_cast<double>(cval);
		std::cout << "char : '" << cval << "'" << std::endl;
		std::cout << "int : '" << ival << "'" << std::endl;
		std::cout << "float : '" << fval << "'" << std::endl;
		std::cout << "double : '" << dval << "'" << std::endl;
	}
	// If int detected
	lval = str::strtol(str.c_str(), &endPtr, 10);
	if (endPtr == '\0' && errno != ERANGE)
	{
		if (lval < INT_MIN || lval > INT_MAX)
		{
			std::cout << "char : Impossible" << std::endl;
			std::cout << "int : Impossible" << std::endl;
			std::cout << "float : Impossible" << std::endl;
			std::cout << "double : Impossible" << std::endl;
			return;
		}
		cval = static_cast<int>(lval);
		ival = static_cast<int>(lval);
		fval = static_cast<int>(lval);
		dval = static_cast<int>(lval);
		if (!isprint(cval))
			std::cout << "char : Non displayable" << std::endl;
		
	}
}