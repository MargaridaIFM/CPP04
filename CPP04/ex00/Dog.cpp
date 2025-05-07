/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:43:30 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/06 21:49:37 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog:: Dog(): Animal("Dog")
{
    std::cout << type <<" Default Constructor Called" << std::endl;
}
Dog::Dog(const Dog &other): Animal("Dog")
{
    this->type = other.type;
    std::cout <<  this->type << " Copy constructor Called." << std::endl;

}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other) {
        this->type = other.type;
    }
    std::cout <<  this->type << " Copy Cssignment Operator called." << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}
void Dog:: makeSound() const
{
    std::cout << "Woof Woof!!" << std:: endl;
}