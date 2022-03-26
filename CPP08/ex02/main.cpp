/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 08:11:51 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/21 08:12:52 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " MutantStack.hpp"
#include <list>

int main()
{
	try
	{
		std::cout << "===== MutanStack =====" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m=======EXCEPTION=======\033[m" << std::endl;
		std::cerr << e.what() << '\n';
		std::cout << "\033[1;31m=======================\033[m" << std::endl;
	}
	try
	{
		std::cout << "===== List =====" << std::endl;
        std::list<int> list;
        list.push_front(5);
        list.push_front(17);
        std::cout << list.front() << std::endl;
        list.pop_front();
        std::cout << list.size() << std::endl;
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        //[...]
        list.push_back(0);
        std::list<int>::iterator it2 = list.begin();
        std::list<int>::iterator ite2 = list.end();
        ++it2;
        --it2;
        while (it2 != ite2)
        {
            std::cout << *it2 << std::endl;
            ++it2;
        }

	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m=======EXCEPTION=======\033[m" << std::endl;
		std::cerr << e.what() << '\n';
		std::cout << "\033[1;31m=======================\033[m" << std::endl;
	}

	return 0;
}