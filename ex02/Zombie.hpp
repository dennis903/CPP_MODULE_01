/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:13:37 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 14:28:35 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
class				Zombie
{
	private:
		std::string	name;
		std::string	type;
	public:
		Zombie();
		Zombie(std::string _name, std::string _type);
		~Zombie();
		static std::string	create_random_name(void);
		void		set_name_type(std::string name, std::string type);
		std::string	get_name(void);
		std::string	get_type(void);
		void		announce();
};
#endif