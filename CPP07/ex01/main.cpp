/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:05:35 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/18 22:37:55 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void    ft_putchar(const char &c)
{
    write(1, &c, 1);
}

int main(void)
{
    char test[13] = "test string\n";
    std::cout << "======================" << std::endl;
    iter(test, strlen(test), &ft_putchar);
    std::cout << "======================" << std::endl;

}