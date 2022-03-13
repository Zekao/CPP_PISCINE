/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:15:10 by emaugale          #+#    #+#             */
/*   Updated: 2022/03/13 21:31:52 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>
// # include "Animal.hpp"

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(Brain &copy);
        ~Brain();
		Brain & operator = ( Brain const & value );
        std::string getIdeas(int i) const;
        void setIdeas(std::string content, int i);

};

#endif