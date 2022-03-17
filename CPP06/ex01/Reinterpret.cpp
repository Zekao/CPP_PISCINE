/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reinterpret.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:44:27 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/17 21:12:54 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Reinterpret.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}
