/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:52:55 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/08 19:30:17 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal:: AAnimal(): type("")
{
    std::cout << "Default Constructor Called" << std::endl;
}
AAnimal::AAnimal(std::string type): type(type)
{
    std::cout <<  type << " Default Parameter Constructu\or Called." << std::endl;
}
AAnimal::AAnimal(const AAnimal &other)
{
    this->type = other.type;
    std::cout <<  this->type << " Copy constructor Called." << std::endl;

    
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
    if (this != &other) {
        this->type = other.type;
    }
    std::cout <<  this->type << " Copy Cssignment Operator called." << std::endl;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor Called" << std::endl;
}

std::string AAnimal::getType() const
{
    return (this->type);
}
