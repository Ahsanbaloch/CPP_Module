/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:09:33 by ahsalam           #+#    #+#             */
/*   Updated: 2024/05/04 20:04:00 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
	try
	{
		if (argc < 3 || argc > INT_MAX)
		{
			std::cerr << "Usage: ./PmergeMe [number1] [number2] ... [numberN]" << std::endl;
			return (1);
		}
		else
			PmergeMe p(argc - 1, argv + 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	
	
	return (0);
}