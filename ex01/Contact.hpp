/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:09:50 by ikhristi          #+#    #+#             */
/*   Updated: 2024/01/06 18:51:01 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string firstName;
		std::string secondName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		Contact();
		~Contact();

		void	set_value(std::string f, std::string s, std::string n, std::string p, std::string d);
		void	set_firstName(std::string _firstName);
		void	set_secondName(std::string _secondName);
		void	set_nickName(std::string _nickName);
		void	set_phoneNumber(std::string _phoneNumber);
		void	set_darkestSecret(std::string _darkestSecret);

		std::string get_firstName(void);
		std::string get_secondName(void);
		std::string get_nickName(void);
		std::string get_phoneNumber(void);
		std::string get_darkestSecret(void);
};

#endif