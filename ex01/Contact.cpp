/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:58:14 by ikhristi          #+#    #+#             */
/*   Updated: 2024/01/06 18:25:28 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get_firstName(void)
{
	return(this->firstName);
}

std::string Contact::get_secondName(void)
{
	return(this->secondName);
}

std::string Contact::get_nickName(void)
{
	return(this->nickname);
}

std::string Contact::get_phoneNumber(void)
{
	return(this->phoneNumber);
}

std::string Contact::get_darkestSecret(void)
{
	return(this->darkestSecret);
}

void Contact::set_value(std::string f, std::string s, std::string n, std::string p, std::string d)
{
	this->firstName = f;
	this->secondName = s;
	this->nickname = n;
	this->phoneNumber = p;
	this->darkestSecret = d;
}

void	Contact::set_firstName(std::string _firstName)
{
	this->firstName = _firstname;
}

void	Contact::set_secondName(std::string _secondName)
{
	this->secondName = _secondName;
}

void	Contact::set_nickName(std::string _nickName)
{
	this->nickname = _nickName;
}

void	Contact::set_phoneNumber(std::string _phoneNumber)
{
	this->phoneNumber = _phoneNumber;
}

void	Contact::set_darkestSecret(std::string _darkestSecret)
{
	this->darkestSecret = _darkestSecret;
}
