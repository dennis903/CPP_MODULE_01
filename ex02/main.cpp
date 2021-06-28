/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:42:48 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 12:46:13 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int					main()
{
	ZombieEvent		Tankzombie;
	ZombieEvent		Smokerzombie;
	ZombieEvent		Hunterzombie;
	ZombieEvent		Witchzombie;
	Zombie			*Tank;
	Zombie			*Smoker;
	Zombie			*Hunter;
	Zombie			*Witch;

	Tankzombie.setZombieType("Tank");
	Tank = Tankzombie.randomChump();
	Smokerzombie.setZombieType("Smoker");
	Smoker = Smokerzombie.randomChump();
	Hunterzombie.setZombieType("Hunter");
	Hunter = Hunterzombie.randomChump();
	Witchzombie.setZombieType("Witch");
	Witch = Witchzombie.randomChump();
	
	delete Tank;
	delete Smoker;
	delete Hunter;
	delete Witch;
}