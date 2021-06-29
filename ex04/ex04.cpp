/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:38:38 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 16:18:39 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	// std::cout << "pointer address : "<< &ptr << std::endl;
	// std::cout << "reference address : " << &ref << std::endl;
	// std::cout << "str address : " << &str << std::endl;
	std::cout << "========= pointer ===========" << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << "======== reference ==========" << std::endl;
	std::cout << ref << std::endl;
	return (0);
}