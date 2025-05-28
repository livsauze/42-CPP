/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:08:11 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/28 17:27:41 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int main(void)
{
	Data data;

	data.val = 42;
	data.text = "Hello";

	uintptr_t	serialized = Serializer::serialize(&data);
	Data *deserializePtr = Serializer::deserialize(serialized);

	if (deserializePtr == &data)
	{
		std::cout << "Pointers matches, it's a success !" << std::endl;
		std::cout << "Data ptr :" << &data << "\nDeserialized ptr : " << deserializePtr << std::endl;
		std::cout << "Data val = " << data.val << "\nData text = " << data.text << std::endl;
		std::cout << "Deserialize val = " << deserializePtr->val << "\nDeserialize text = " << deserializePtr->text << std::endl;
	}
	else
		std::cout << "Failure, the pointers do not match" << std::endl;
	
}
