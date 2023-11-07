/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:21:30 by ikhristi          #+#    #+#             */
/*   Updated: 2023/11/07 14:56:26 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string FirsName;
	std::string SecondName;
	std::string PhoneNumber;
	std::string NickName;
	std::string DarkestSecret;
	std::string GetInput(std::string str) const;

public:
	void	Init(void);
	void	ShowInfo(void);
};

#endif