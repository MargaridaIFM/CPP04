/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:32:55 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/07 18:59:47 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int nbr_Animals = 30;
    const Animal* Animals[nbr_Animals];
     
    for(int i = 0; i < nbr_Animals;  i++)
    {
        if(i % 2 == 0)
            Animals[i] = new Dog; 
        else
            Animals[i] = new Cat;
    }
    
    

    return (0);
}