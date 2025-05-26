/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:52:51 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/26 18:49:58 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMTERIA_HPP
#define AMATERA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &other);
        AMateria &operator=(const AMateria &other); 
        virtual ~AMateria();
        
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif