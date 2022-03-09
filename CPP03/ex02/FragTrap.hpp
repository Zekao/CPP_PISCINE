/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:13:26 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/09 04:47:01 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
    private:
        /* data */
    public:
        FragTrap();
        FragTrap(std::string const &name);
        FragTrap(FragTrap &a);
        ~FragTrap();
        void highFivesGuys(void) const;
		FragTrap & operator = ( FragTrap const & value );
};

#endif