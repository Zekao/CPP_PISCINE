/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 02:58:16 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/21 05:08:37 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::cout << "======= CREATING A FIRST VECTOR =======" << std::endl;
	try
	{
		std::vector<int>	list(10000);
		for (int i = 0; i < 10000; i++)
			list.push_back(i);
		std::cout << "value : " << *easyfind(list, 564) << std::endl;
		std::cout << "value : " << *easyfind(list, 4756) << std::endl;
		std::cout <<  *easyfind(list, 47654) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m=======EXCEPTION=======\033[m" << std::endl;
		std::cerr << e.what() << '\n';
		std::cout << "\033[1;31m=======================\033[m" << std::endl;
	}

	std::cout << "======= CREATING A SECOND VECTOR =======" << std::endl;
	try
	{
		std::deque<int>	list2(1000000);
		for (int i = 0; i < 1000000; i++)
			list2.push_back(i);
		std::cout << "value : " << *easyfind(list2, 54) << std::endl;
		std::cout << "value : " << *easyfind(list2, 33534) << std::endl;
		std::cout <<  *easyfind(list2, 47622154) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m=======EXCEPTION=======\033[m" << std::endl;
		std::cerr << e.what() << '\n';
		std::cout << "\033[1;31m=======================\033[m" << std::endl;
	}
}