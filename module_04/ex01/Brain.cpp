/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:30:01 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/18 17:30:49 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Hello from Brain Constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Bye from Brain Destructor" << std::endl;
}

Brain::Brain(const Brain& copy_const)
{
	std::cout << "Hello from Brain copy Constructor" << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = copy_const.ideas[i];
}

Brain& Brain::operator=(const Brain& assign_op)
{
	std::cout << "Hello from Brain assignment operator" << std::endl;
	if (this != &assign_op)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = assign_op.ideas[i];
	}
	return (*this);
}

