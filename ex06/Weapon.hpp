/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 21:18:37 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 21:39:28 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>
class	Weapon
{
	private:
		std::string			type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		void				setType(std::string type);
		const std::string&	getType() const;
};
#endif