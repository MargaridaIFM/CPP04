/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:58:34 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/06 21:49:08 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat:: Cat(): Animal("Cat")
{
    std::cout << type <<" Default Constructor Called" << std::endl;
}
Cat::Cat(const Cat &other): Animal("Cat")
{
    this->type = other.type;
    std::cout <<  this->type << " Copy constructor Called." << std::endl;

}

Cat& Cat::operator=(const Cat &other)
{
    if (this != &other) {
        this->type = other.type;
    }
    std::cout <<  this->type << " Copy Cssignment Operator called." << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}
void Cat:: makeSound() const
{
    std::cout << "Miau" << std:: endl;
}
