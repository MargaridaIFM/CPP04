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

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
    private:
    
    protected:
        std::string _name;
        AMateria *inventory[4];
    
    public:
        Character();
        Character(std::string name);
        Character(const Character &other);
        Character &operator=(const Character &other);
        ~Character();
    
        std::string const & getName() const;
        void equip(AMateria* );
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    };

#endif
