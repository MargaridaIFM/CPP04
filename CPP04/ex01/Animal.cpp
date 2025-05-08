/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:52:55 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/08 19:30:17 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal(): type("")
{
    std::cout << "Default Constructor Called" << std::endl;
}
Animal::Animal(std::string type): type(type)
{
    std::cout <<  type << " Default Parameter Constructu\or Called." << std::endl;
}
Animal::Animal(const Animal &other)
{
    this->type = other.type;
    std::cout <<  this->type << " Copy constructor Called." << std::endl;

    
}

Animal& Animal::operator=(const Animal &other)
{
    if (this != &other) {
        this->type = other.type;
    }
    std::cout <<  this->type << " Copy Cssignment Operator called." << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}
void Animal:: makeSound() const
{
    std::cout << "Sound of an animal" << std:: endl;
}
std::string Animal::getType() const
{
    return (this->type);
}
