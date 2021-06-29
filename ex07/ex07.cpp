/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 22:18:37 by hyeolee           #+#    #+#             */
/*   Updated: 2021/06/29 19:25:37 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int					main(int argc, char *argv[])
{
	char			c;
	unsigned long	idx;
	std::string		filename;
	std::string		srcs;
	std::string		dest;
	std::string		str;
	std::ifstream	file_in(argv[1]);

	if (argc != 4)
	{
		std::cout << "Error : Argument" << std::endl;
		return (-1);
	}
	if (file_in.is_open())
	{
		filename = argv[1];
		srcs = argv[2];
		dest = argv[3];
		if (!(filename.length() > 0 && srcs.length() > 0 && dest.length() > 0))
		{
			std::cout << "Error : Argument" << std::endl;
			return (-1);
		}
		while (!file_in.eof())
		{
			c = file_in.get();
			if (!file_in.eof())
				str += c;
		}
		while (1)
		{
			idx = str.find(srcs);
			if (idx == std::string::npos)
				break ;
			str.replace(str.find(argv[2]), strlen(argv[2]), argv[3]);
		}
		filename += ".replace";
		std::ofstream	file_out(filename.c_str());
		if (file_out.fail())
		{
			std::cout << "Error : File open failed" << std::endl;
			return (-1);
		}
		file_out << str;
		file_in.close();
	}
	else
		std::cout << "Error : File does not exists" << std::endl;
	return (0);
}