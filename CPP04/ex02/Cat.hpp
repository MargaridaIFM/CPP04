/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:04:03 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/08 20:06:00 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat();

        void makeSound() const;
        Brain *getBrain();
    
};

#endif