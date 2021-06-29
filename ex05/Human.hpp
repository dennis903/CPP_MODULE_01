/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:11:39 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/28 20:34:30 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include "Brain.hpp"

class	Human
{
	private:
		const Brain	brain;
	public:
		Human();
		~Human();
		const Brain &getBrain() const;
		std::string identify();
};
#endif