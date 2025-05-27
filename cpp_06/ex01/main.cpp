/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:55:47 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/26 17:12:35 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	data;
	data.i = 42;
	data.s = "Caroline";

	std::cout << "data address: " << &data << std::endl;
	
	uintptr_t data_ser = Serializer::serialize(&data);

	std::cout << "Serialized data: " << data_ser << std::endl;
	
	std::cout << "reinterpret cast<Data *>: " << reinterpret_cast<Data *>(&data) << std::endl;
	Data* recovered = Serializer::deserialize(data_ser);

	std::cout << "Deserialized data address: " << recovered << std::endl;
	std::cout << "data.i: " << recovered->i << ", data.s: " << recovered->s << std::endl;
	
	uintptr_t data_reser = Serializer::serialize(recovered);
	
	std::cout << "New serialized data: " << data_reser << std::endl;

	return (0);
}
