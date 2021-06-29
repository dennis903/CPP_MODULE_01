/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 13:05:52 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 14:36:26 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include "Zombie.hpp"

class			ZombieHorde
{
	private:
		int		num;
		Zombie	*zombies;

	public:
		ZombieHorde();
		ZombieHorde(std::string type, int num);
		~ZombieHorde();
		void	announce(void);
};
#endif