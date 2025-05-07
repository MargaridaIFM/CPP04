/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:58:34 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/07 18:44:47 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << type <<" Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal()
{
    this->type = other.type;
    std::cout <<  this->type << " WrongCat Copy constructor Called." << std::endl;

}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    if (this != &other) {
        this->type = other.type;
    }
    std::cout <<  this->type << " WrongCat Copy Assignment Operator called." << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat:: makeSound() const
{
    std::cout << "Muuuuhhhhhhhh" << std:: endl;
}
