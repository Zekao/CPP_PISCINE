/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:00:41 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/18 19:15:56 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <class T>
void swap(T &first, T &second)
{
    T tmp;
    tmp = first;
    first = second;
    second = tmp;
}

template <class T>
T min(T first, T second)
{
    if (first > second)
        return (second);
    else
        return (first);
}

template <class T>
T max(T first, T second)
{
    if (first < second)
        return (second);
    else
        return (first);

}

#endif