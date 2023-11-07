/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:27:53 by ikhristi          #+#    #+#             */
/*   Updated: 2023/11/07 15:14:50 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::GetInput(std::string str) const
{
	std::string input = "";
	bool valid = false;

	do
	{
		std::cout << str;
		std::getline(std::cin, input);
		if(!input.empty())
		{
			valid = true;
			if(str == "Please enter your phone number: ")
				for(int i = 0; str[i]; i++)
					if(!std::isdigit(str[i]))
					{
						std::cout << "Invalid input, try again" << std::endl;
						valid = false;
						continue;
					}
		}
		else
		{
			std::cout << "Invalid input, try again" << std::endl;
			std::cin.clear();
		}
	}while(!valid);
	return (input);
}

void	Contact::Init(void)
{
	this->FirsName = this->GetInput("Please enter your first name: ");
	this->SecondName = this->GetInput("Please enter your second name: ");
	this->NickName = this->GetInput("Please enter your nickname: ");
	this->PhoneNumber = this->GetInput("Please enter your phone number: ");
	this->DarkestSecret = this->GetInput("Please enter your darkest secret: ");
	std::cout << "------------------------" << std::endl;
	std::cout << "Contact sucsessfuly added" << std::endl;
	std::cout << "------------------------" << std::endl;
}

void	Contact::ShowInfo(void)
{
	std::cout << "------------------------" << std::endl;
	std::cout << "First name: " << this->FirsName << std::endl;
	std::cout << "Second name: " << this->SecondName << std::endl;
	std::cout << "Nickname: " << this->PhoneNumber << std::endl;
	std::cout << "Darkest secret :" << this->PhoneNumber << std::endl;
	std::cout << "Phone number: " << this->PhoneNumber << std::endl;
	std::cout << "------------------------" << std::endl;
}

