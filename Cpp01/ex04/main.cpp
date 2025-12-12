/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 15:31:26 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/12 17:27:45 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	sub_string(std::string &buffer, std::string s1, std::string s2)
{
		size_t pos = 0;
		while ((pos = buffer.find(s1, pos)) != buffer.npos)
		{
			buffer.erase(pos, s1.length());
			buffer.insert(pos, s2);
			pos += s2.length();
		}
		std::cout << buffer << std::endl;
}

int	handle_file(std::string file, std::string s1, std::string s2)
{
	std::ifstream infile(file.c_str());
	if (!infile)
	{
		std::cout << "File not found" << std::endl;
		return (1);
	}
	std::ofstream outfile((file + ".replace").c_str());
	if	(!outfile)
	{
		std::cout << "Unable to create file" << std::endl;
		return (1);
	}
	std::string buffer;
	while (std::getline(infile, buffer))
	{
		sub_string(buffer, s1, s2);
		outfile << buffer << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	else
	{
		std::string file = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		if (handle_file(file, s1, s2) == 1)
			return (1);
	}
	return (0);
}