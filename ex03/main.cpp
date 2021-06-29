/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:32:24 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/29 19:49:00 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void			Zombie()
{
	ZombieHorde	Tanker("Tanker", 100);
	ZombieHorde	Smoker("Smoker", 5);

	Tanker.announce();
	Smoker.announce();
}

int				main()
{
	Zombie();
	return (0);
}