/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:35:32 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 12:20:19 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void			ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*			ZombieEvent::newZombie(std::string name)
{
	Zombie		*zombie;

	zombie = new Zombie(name, this->type);
	return (zombie);
}

Zombie*			ZombieEvent::randomChump()
{
	Zombie		*zombie;
	std::string	name;

	zombie = new Zombie(Zombie::create_random_name(), this->type);
	zombie->announce();
	return (zombie);
}