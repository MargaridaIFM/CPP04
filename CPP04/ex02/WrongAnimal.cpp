/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:52:55 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/06 21:51:37 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("")
{
    std::cout << "WrongAninal Default Constructor Called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type): type(type)
{
    std::cout <<  type << " Default Parameter Constructer Called." << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    this->type = other.type;
    std::cout <<  this->type << " Copy constructor Called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other) {
        this->type = other.type;
    }
    std::cout <<  this->type << " Copy Cssignment Operator called." << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}
void WrongAnimal:: makeSound() const
{
    std::cout << "Sound of an WrongAnimal" << std:: endl;
}
std::string WrongAnimal::getType() const
{
    return (this->type);
}
