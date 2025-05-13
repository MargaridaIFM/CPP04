/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:04:55 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/08 19:25:21 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
    std::string type;
    
    public:
    AAnimal();
    AAnimal(std::string type); // manter ou tiro?? 
    AAnimal(const AAnimal &other);
    AAnimal &operator=(const AAnimal &other);
    virtual ~AAnimal();

    // Puramente virtual (Nao e inicializada)
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif