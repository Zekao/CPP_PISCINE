/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reinterpret.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:44:46 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/17 21:23:51 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REINTERPRET_HPP
# define REINTERPRET_HPP

# include <iostream>
# include <stdint.h>

    typedef struct  s_Data
    {
        std::string data;
    }           Data;
    
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);

#endif