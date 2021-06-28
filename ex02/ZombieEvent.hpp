/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:34:08 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/26 18:17:19 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_CPP
# define ZOMBIEEVENT_CPP
# include "Zombie.hpp"

class				ZombieEvent
{
	private:
		std::string	type;
	public:
		ZombieEvent();
		~ZombieEvent();

		void		setZombieType(std::string type);
		Zombie		*newZombie(std::string name);
		Zombie		*randomChump();
};
#endif