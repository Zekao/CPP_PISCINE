/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:23:00 by emaugale          #+#    #+#             */
/*   Updated: 2022/02/16 00:23:00 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "\033[1;31mWrong number of arguments -> [./Sed input to_search to_replace]\033[m" << std::endl, 1);
	std::ifstream	input(argv[1]);
	std::string		to_search(argv[2]);
	std::string		to_replace(argv[3]);
	std::string		temp;
	std::string		temp2;
	std::string		name;

	name = argv[1];
	name += ".replace";

	if (!input)
		return (std::cerr << "Couldn't open \033[1;31m" << argv[1] << "\033[m" << std::endl, 1);
	std::string 	line;
	std::ofstream	output(name);
	if (to_search == to_replace)
	{
		while(std::getline(input, line))
			output << line << std::endl;
		output.close();
		return (0);
	}
	while(std::getline(input, line))
	{
		while(42)
		{
			std::size_t found = line.find(to_search);
			if (found != std::string::npos)
			{
				temp = line.substr(0, found);
				temp = temp + to_replace;
				temp2 = line.substr(found + to_search.length(), line.length());
				line = temp + temp2;
			}
			else
				break;
		}
		output << line << std::endl;
	}
	output.close();
	std::cout << "\033[1;32m Correctly replaced content in the file\033[m" << std::endl;
}