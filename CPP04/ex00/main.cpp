/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:32:55 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/07 21:22:05 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* Animals = new Animal();
    const Animal* Dogs = new Dog();
    const Animal* Cats = new Cat();
    
    std::cout << Animals->getType() <<  "Animal: ";
    Animals->makeSound(); 
    
    std::cout << Dogs->getType() << ": ";
    Dogs->makeSound(); 
    
    std::cout << Cats->getType() << ": "; 
    Cats->makeSound();
    
    delete(Animals);
    delete(Dogs);
    delete(Cats);

    std::cout << std::endl;
    std:: cout << "Wrong animals sounds" << std::endl;
  
    const WrongAnimal* WrongAnimal1 = new WrongAnimal();
	const WrongAnimal* WrongAnimal2 = new WrongCat();

    std::cout << WrongAnimal1->getType() << "WrongAnimal: ";
    WrongAnimal1->makeSound(); 
    
    std::cout << WrongAnimal2->getType() << ":";
    WrongAnimal2->makeSound();
    
    delete(WrongAnimal1);
    delete(WrongAnimal2);    

    return (0);
}