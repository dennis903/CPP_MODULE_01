/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:14:28 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/26 16:19:01 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony
{
	private:
		std::string const name;
	public:
		Pony();
		Pony(std::string const _name);
		~Pony();

		std::string const get_name();
		void run_pony(std::string const _name);
};
#endif