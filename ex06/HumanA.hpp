/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 21:25:46 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 22:07:29 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
class	HumanA
{
	private:
		Weapon		&weapon;
		std::string	name;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA();
		void	attack();
};
#endif