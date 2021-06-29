/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 21:25:21 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 22:13:17 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
class	HumanB
{
	private:
		Weapon	*weapon;
		std::string	name;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack();
};
#endif