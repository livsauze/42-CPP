/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:18:42 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/28 15:37:08 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string& str)
{
	bool	isPseudoF = (str == "-inff" || str == "+inff" || str == "nanf");
	bool	isPseudoD = (str == "-inf" || str == "+inf" || str == "nan");
	char	*endPtr = NULL;
	char	cval;
	int		ival;
	float	fval;
	double	dval;
	long	lval;
	
	errno = 0;
	if (isPseudoF || isPseudoD)
	{
		fval = strtof(str.c_str(), &endPtr);
		dval = strtod(str.c_str(), &endPtr);
		std::cout << "char : Impossible" << std::endl;
		std::cout << "int : Impossible" << std::endl;
		std::cout << "float : " << fval << "f" << std::endl;
		std::cout << "double : " << dval << std::endl;
		return;
	}
	// If char detected
	if (str.length() == 1 && !isdigit(str[0]) && isprint(str[0]))
	{
		cval = str[0];
		ival = static_cast<int>(cval);
		fval = static_cast<float>(cval);
		dval = static_cast<double>(cval);
		std::cout << "char : '" << cval << "'" << std::endl;
		std::cout << "int : " << ival << std::endl;
		std::cout << "float : " << fval << ".0f" << std::endl;
		std::cout << "double : " << dval << std::endl;
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
		std::cout << "int : " << ival << std::endl;
		std::cout << "float : " << fval << ".0f" << std::endl;
		std::cout << "double : " << dval << ".0" << std::endl;
	}
	// If int detected
	lval = strtol(str.c_str(), &endPtr, 10);
	if (*endPtr == '\0' && errno != ERANGE)
	{
		if (lval < INT_MIN || lval > INT_MAX)
		{
			std::cout << "char : Impossible" << std::endl;
			std::cout << "int : Impossible" << std::endl;
			std::cout << "float : Impossible" << std::endl;
			std::cout << "double : Impossible" << std::endl;
			return;
		}
		ival = static_cast<int>(lval);
		cval = static_cast<char>(ival);
		fval = static_cast<float>(ival);
		dval = static_cast<double>(ival);
		if (!isprint(cval) || ival < std::numeric_limits<char>::min() || ival > std::numeric_limits<char>::max())
			std::cout << "char : Non displayable" << std::endl;
		else
			std::cout << "char : '" << cval << "'" << std::endl;
		std::cout << "int : " << ival << std::endl;
		std::cout << "float : " << fval << ".0f" << std::endl;
		std::cout << "double : " << dval << ".0" << std::endl;
		return;
	}
	// If float detected
	else if (str[str.length() - 1] == 'f')
	{
		fval = strtof(str.c_str(), &endPtr);
		if (*endPtr == 'f' && *(endPtr + 1) == '\0' && errno != ERANGE)
		{
			cval = static_cast<char>(fval);
			ival = static_cast<int>(fval);
			dval = static_cast<double>(fval);
			if (!isprint(cval))
				std::cout << "char : Non displayable" << std::endl;
			else
				std::cout << "char : '" << cval << "'" << std::endl;
			if (fval < static_cast<float>(INT_MIN) || fval > static_cast<float>(INT_MAX))
				std::cout << "int : Impossible" << std::endl;
			else
				std::cout << "int : " << ival << std::endl;
			std::cout << std::fixed << std::setprecision(1) << "float : " << fval << "f" << std::endl;
			std::cout << std::fixed << std::setprecision(1) << "double : " << dval << std::endl;
			return;
		}
	}
	// If double detected
	dval = strtod(str.c_str(), &endPtr);
	if (*endPtr == '\0' && errno != ERANGE)
	{
		ival = static_cast<int>(dval);
		fval = static_cast<double>(dval);
		cval = static_cast<char>(ival);
		if (!isprint(cval))
				std::cout << "char : Non displayable" << std::endl;
		else
			std::cout << "char : '" << cval << "'" << std::endl;
		if (dval < static_cast<float>(INT_MIN) || dval > static_cast<float>(INT_MAX))
			std::cout << "int : Impossible" << std::endl;
		else
			std::cout << "int : " << ival << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float : " << fval << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double : " << dval << std::endl;
		return;
	}
		std::cout << "char : Impossible" << std::endl;
		std::cout << "int : Impossible" << std::endl;
		std::cout << "float : Impossible" << std::endl;
		std::cout << "double : Impossible" << std::endl;
		return;
}