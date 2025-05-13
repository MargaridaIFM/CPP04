/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:58:34 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/08 20:05:52 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat:: Cat(): AAnimal(), brain(new Brain())
{
    std::cout << type <<" Default Constructor Called" << std::endl;
}
Cat::Cat(const Cat &other): AAnimal("other")
{
    brain = new Brain(*other.brain);
    std::cout <<  this->type << " Copy constructor Called." << std::endl;

}
Cat& Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout <<  this->type << " Copy Cssignment Operator called." << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor Called" << std::endl;
}
void Cat:: makeSound() const
{
    std::cout << "Miau" << std:: endl;
}

Brain *Cat::getBrain()
{
    return (this->brain);
}
