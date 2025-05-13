/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:52:47 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/08 20:07:20 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
   // std::cout << "Brain Default Constructor  Called" << std::endl;
}

Brain::Brain(const Brain &other)
{

}


Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}
    for(int i = 0; i < 100; i++)
        ideas[i] = ""
// std::string Brain::getIdea(int index) const
// {

// }
// void Brain::setIdea(int Index, const std::string &newIdea)
// {
    
// }