/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 21:25:13 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/26 21:28:39 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("Default")
{
    for(int i= 0; i < 4; i++)
        inventory[i] = 0;
}
Character::Character(std::string name): _name(name)
{
    for(int i= 0; i < 4; i++)
        inventory[i] = 0;
}

Character::~Character()
{
     for(int i= 0; i < 4; i++)
      if (inventory[i])
        delete inventory[i];
}

std::string const &Character::getName() const
{
    return(this->_name);
}

void Character:: equip(AMateria* m)
{
    if(!m)
        std::cout << "The inventory doesn't exist" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if(inventory[i] == 0)
        {
            inventory[i] = m;
            return ;
        }
    }
}
void  Character::unequip(int idx)
{
    if(idx >=0 && idx < 4)
        inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
     if(idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}

Character::Character(const Character &other)
{
    *this = other;
}

Character &Character::operator=(const Character &other)
{
    _name = other._name;

    for(int i = 0; i < 4; i++)
    {
        if(inventory[i])
            delete inventory[i];
        if(other.inventory[i])
        {
            inventory[i] = other.inventory[i]->clone();
        }
        else
             inventory[i] = 0;

    }
    return(*this);
}