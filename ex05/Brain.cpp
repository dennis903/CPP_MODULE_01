/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:45:06 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 21:00:43 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	forebrain = 1;
	midbrain = 2;
	hindbrain = 3;
}

Brain::~Brain()
{
}

std::string	Brain::identify(void) const
{
	std::stringstream	ss;
	std::string			temp;
	unsigned int		i;

	i = 0;
	ss << this;
	ss >> temp;

	temp.c_str();
	while (i < temp.length())
	{
		if (temp[i] >= 'a' && temp[i] <= 'z' && temp[i] != 'x')
			temp[i] -= 32;
		i++;
	}
	return (temp);
}