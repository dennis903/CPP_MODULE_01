/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 13:01:03 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 15:25:06 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
}

ZombieHorde::ZombieHorde(std::string type, int num)
{
	int		i;

	i = 0;
	this->num = num;
	this->zombies = new Zombie[num];
	while (i < num)
	{
		zombies[i].set_name_type(Zombie::create_random_name(), type);
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}

void	ZombieHorde::announce(void)
{
	int	i;

	i = 0;
	std::cout << this->zombies[0].get_type() << " yeiling" << std::endl;
	while (i < this->num)
	{
		this->zombies[i].announce();
		i++;
	}
}