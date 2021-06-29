/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:45:33 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 20:50:44 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <string>
#include <sstream>

class	Brain
{
	private:
		int	forebrain;
		int	midbrain;
		int	hindbrain;
	public:
		Brain();
		~Brain();
		std::string	identify(void) const;
};
#endif