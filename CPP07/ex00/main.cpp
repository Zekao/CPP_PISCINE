/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:04:11 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/18 19:20:27 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{

    int a = 12;
    int b = 42;

    std::cout << "\033[1;31mTrying with integers\033[m" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "=       \033[1;32mBEFORE SWAP\033[m      =" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "Value of a " << a << std::endl;
    std::cout << "Value of b " << b << std::endl;
    ::swap(a, b);
    std::cout << "==========================" << std::endl;
    std::cout << "=        \033[1;33mAFTER SWAP\033[m      =" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "Value of a " << a << std::endl;
    std::cout << "Value of b " << b << std::endl;

    std::cout << "Min value : " << ::min(a, b) << std::endl;
    std::cout << "Max value : " << ::max(a, b) << std::endl;

    std::string s1 = "salut a tous";
    std::string s2 = "salut A tous";

    std::cout << "\033[1;31mTrying with strings\033[m" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "=       \033[1;32mBEFORE SWAP\033[m      =" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "Value of s1 " << s1 << std::endl;
    std::cout << "Value of s2 " << s2 << std::endl;
    ::swap(s1, s2);
    std::cout << "==========================" << std::endl;
    std::cout << "=        \033[1;33mAFTER SWAP\033[m      =" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "Value of s1 " << s1 << std::endl;
    std::cout << "Value of s2 " << s2 << std::endl;

    std::cout << "Min value : " << ::min(s1, s2) << std::endl;
    std::cout << "Max value : " << ::max(s1, s2) << std::endl;

    
}
