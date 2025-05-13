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
     for(int i = 0; i < 100; i++)
        ideas[i] = "I want to eat";
}

Brain::Brain(const Brain &other)
{
   *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    for(int i = 0; i < 100 ; i++)
        this->ideas[i] = other.ideas[i];
    return(*this);
}
Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
    return(this->ideas[index]);
}
