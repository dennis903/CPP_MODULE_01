/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 19:10:55 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/25 20:43:26 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string const _name) : name(_name)
{
	std::cout << "Constructor" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Destructor" << std::endl;
}

std::string const Pony::get_name()
{
	return (name);
}

void	Pony::run_pony(std::string const _name)
{
	std::cout << _name << " " << "run fast" << std::endl;
}