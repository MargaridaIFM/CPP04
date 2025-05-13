/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:43:30 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/08 20:02:42 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): AAnimal(), brain(new Brain())
{
    std::cout << type <<" Default Constructor Called" << std::endl;
}
Dog::Dog(const Dog &other): AAnimal("other")
{
    brain = new Brain(*other.brain);
    std::cout <<  this->type << " Copy constructor Called." << std::endl;

}

Dog& Dog::operator=(const Dog &other)
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

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor Called" << std::endl;
}
void Dog:: makeSound() const
{
    std::cout << "Woof Woof!!" << std:: endl;
}

Brain *Dog::getBrain()
{
    return(this->brain);
}