/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 02:36:25 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/18 17:41:57 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    setType("Dog");
    std::cout << "Hello from Dog Constructor" << std::endl;
    _brain = new Brain();

}

Dog::~Dog()
{
    std::cout << "Bye from Dog Destructor" << std::endl;
    if (_brain)
        delete _brain;
}

Dog::Dog(const Dog& copy_const) : Animal(copy_const)
{
    std::cout << "Hello from Dog copy constructor" << std::endl;
    *this = copy_const;
}

Dog& Dog::operator=(const Dog& assign_op)
{
     std::cout << "Hello from Dog assignment operator" << std::endl;
     if (this != &assign_op)
     {
        _type_ = assign_op._type_;
        _brain = new Brain(*assign_op._brain);
     }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}