/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:11:36 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 20:36:38 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const Brain& Human::getBrain() const
{
	return (this->brain);
}

std::string Human::identify()
{
	return (this->brain.identify());
}