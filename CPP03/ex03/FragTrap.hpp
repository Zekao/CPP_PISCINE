/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 04:13:26 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/09 06:49:39 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
    private:
    
    public:
        FragTrap();
        FragTrap(std::string const &name);
        FragTrap(FragTrap &a);
        ~FragTrap();
        void highFivesGuys(void) const;
		FragTrap & operator = ( FragTrap const & value );
};

#endif