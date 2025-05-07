/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:32:55 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/07 18:28:56 by mfrancis         ###   ########.fr       */
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

    std:: cout << "Wrong animals sounds" << std::endl;
    
    const WrongAnimal* WrongAnimals = new WrongAnimal();
	const WrongAnimal* WrongCats = new WrongCat();

    std::cout << std::endl;
    std::cout << WrongAnimals->getType() << "WrongAnimal: ";
    WrongAnimals->makeSound(); 
    
    std::cout << WrongCats->getType() << ":";
    WrongCats->makeSound();
    
    delete(WrongAnimals);
    delete(WrongCats);    

    return (0);
}