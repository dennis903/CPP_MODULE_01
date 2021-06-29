/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 21:38:46 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 22:09:26 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : weapon(_weapon), name(_name)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->name << " " << "attacks with his" << " "
	<< this->weapon.getType() << std::endl;
}