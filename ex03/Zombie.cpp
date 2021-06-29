/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:27:02 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 14:28:00 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string _name, std::string _type) : name(_name), type(_type)
{
}

Zombie::~Zombie()
{
}

std::string	Zombie::create_random_name(void)
{
	std::string		name_pool[10] =
	{
		"hyeolee",
		"junghwki",
		"ukwon",
		"sunmin",
		"wopark",
		"hyeonski",
		"jimkwon",
		"sehan",
		"mki",
		"jeongwle"
	};
	int		rand_num;

	srand(time(NULL) * rand());
	rand_num = rand() % 10;
	return (name_pool[rand_num]);
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << "(" << this->type << ")" << ">" << " "
	<< "Braiiiiiiiiinnnssss" << std::endl;
}

void	Zombie::set_name_type(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

std::string	Zombie::get_name(void)
{
	return (this->name);
}

std::string	Zombie::get_type(void)
{
	return (this->type);
}