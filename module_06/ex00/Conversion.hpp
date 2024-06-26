/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:58:59 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/19 15:46:07 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <limits.h>

class Conversion
{
	private:
		Conversion(/* args */);
		Conversion(const Conversion &);
		Conversion &operator=(const Conversion &);
		~Conversion();
	public:
		static void Convert(const std::string input);
};

#endif
