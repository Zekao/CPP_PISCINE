/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:24:31 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/18 22:30:26 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, size_t size, void (*func)(const T &))
{
    size_t i;

    i = 0;
    while (i < size)
    {
        func(array[i]);
        i++;
    }
    return ;
}
#endif