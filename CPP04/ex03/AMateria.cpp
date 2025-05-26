/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:18:21 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/26 18:50:47 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "AMateria.hpp"


AMateria::AMateria(): type("default")
{
    std::cout << "AMateria Default Constructor Called" << std::endl;
}

AMateria::AMateria(std::string const &type):type(type)
{
    std::cout <<  type << " Default Parameter Constructer Called." << std::endl;
}
AMateria::AMateria(const AMateria &other)
{
    this->type = other.type;
    std::cout <<  this->type << " Copy constructor Called." << std::endl;
}
AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
        this->type = other.type;
    std::cout <<  this->type << " Copy Cssignment Operator called." << std::endl;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor Called" << std::endl;
}

std::string const& AMateria::getType() const
{
    return(type);
}

void AMateria::use(ICharacter &target)
{
    if(this->type == "Ice")
        std::cout << "* shoots an ice bolt at " << this->type << " *" << std::endl;
    else
        std::cout <<"* heals " << this->type << "’s wounds *" << std::endl;
}
