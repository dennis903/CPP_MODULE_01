/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 19:43:59 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/25 20:42:09 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void		ponyOnTheHeap(void)
{
	Pony	*horse = new Pony("heap horse");

	horse->run_pony(horse->get_name());
	delete horse;
}

void		ponyOnTheStack(void)
{
	Pony	horse("stack horse");

	horse.run_pony(horse.get_name());
}

int			main(void)
{
	std::cout << "Stack allocate" << std::endl;
	ponyOnTheStack();
	std::cout << "Heap allocate" << std::endl;
	ponyOnTheHeap();

	return (0);
}