/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:38:44 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/08 18:40:56 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	setType("Wrong Cat");
	std::cout << "Hello from Wrong cat Constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Bye from Wrong Cat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy_const) : WrongAnimal(copy_const)
{
	std::cout << "Hello from Wrong Cat Copy Constructor" << std::endl;
	*this = copy_const;
}

WrongCat& WrongCat::operator=(const WrongCat& assign_op)
{
	std::cout << "Hello from Wrong Cat assignment operator" << std::endl;
	if (this != &assign_op)
		_type_ = assign_op._type_;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Cat can't say Meow" << std::endl;
}