/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:51:23 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/26 21:24:54 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter
{
    protected:
        std::string _name;
        AMateria *inventory[4];
    public:
        Character();
        Character(const Character &other);
        Character &operator=(const Character &other);
        virtual ~ICharacter();
        
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* ) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
    };

#endif
