/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:48:19 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/20 16:15:51 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <sstream>

void search_data(const PhoneBook &phonebook)
{
	phonebook.show_data();
	std::string number_string;
	
	std::cout << "Enter the list number to view : ";
	std::getline(std::cin, number_string);
	int i = 0;

	std::istringstream number_stream(number_string);
	if (!(number_stream >> i))
	{
		std::cout << "invalid input... :)" << std::endl;
		return ;
	}
	

	if (i >= 0 && i <= 7)
	{
		Contact list_contact = phonebook.get_data(i);
		if (list_contact.Get_FName().empty())
			std::cout << "Empty... wrong Index :) " << std::endl;
		else
		{
			std::cout << "First Name : " << list_contact.Get_FName() << std::endl;
			std::cout << "Last Name : " << list_contact.Get_LName() << std::endl;
			std::cout << "Nick Name : " << list_contact.Get_NName() << std::endl;
			std::cout << "Number : " << list_contact.Get_Number() << std::endl;
			std::cout << "Darkest Secret : " << list_contact.Get_DSecret() << std::endl;
		}
	}
	else
		std::cout << "invalid number(should be.... 0-7)" << std::endl;
}

void add_data(PhoneBook &phonebook)
{
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string number;
	std::string d_secret;

	 while (1)
    {
        std::cout << "First Name : ";
        std::getline(std::cin, f_name);

        std::cout << "Last Name : ";
        std::getline(std::cin, l_name);

        std::cout << "Nick Name : ";
        std::getline(std::cin, n_name);

        std::cout << "Number : ";
        std::getline(std::cin, number);

        std::cout << "Dark Secret : ";
        std::getline(std::cin, d_secret);

        if (!f_name.empty() && !l_name.empty() && !n_name.empty() && !number.empty() && !d_secret.empty())
            break;

        std::cout << "can't be empty. sorry :). you have to write it again everything" << std::endl;
    }
	phonebook.Set_data(f_name, l_name, n_name, number, d_secret);
}

int main()
{
	std::string input;
	PhoneBook phonebook;

	while (1)
    {
        std::cout << "Choose between (ADD, SEARCH, EXIT)" << std::endl;
        if (!std::getline(std::cin, input))
		{
			std::cout << "input broken" << std::endl;
			break;
		}
        if (input == "ADD")
            add_data(phonebook);
        else if (input == "SEARCH")
            search_data(phonebook);
        else if (input == "EXIT")
            break;
        else
            std::cout << "Please choose from the above given choices" << std::endl;
    }
	return (0);
}

/* void add_data(PhoneBook &phonebook)
{
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string number;
	std::string d_secret;

	while (1)
	{
		std::cout << "First Name : ";
		//std::getline(std::cin, f_name);
		std::cin >> f_name;
		if (!f_name.empty())
			break;
		std::cout << "can't be empty. sorry :)." << std::endl;


	}
	while (1)
	{
		std::cout << "Last Name : ";
		std::cin >> l_name;
		if (!l_name.empty())
			break;
		std::cout << "can't be empty. sorry :)." << std::endl;
	}
	while (1)
	{
		std::cout << "Nick Name : ";
		std::cin >> n_name;
		
		std::cout << "Number : ";
		std::cin >> number;

		std::cout << "Dark Secret : ";
		std::cin >> d_secret;
		if (!f_name.empty() && !l_name.empty() && !n_name.empty() && !number.empty() && !d_secret.empty())
			break;
		std::cout << "can't be empty. sorry :). you have to write it again everything" << std::endl;
	}
	phonebook.Set_data(f_name, l_name, n_name, number, d_secret);
} */