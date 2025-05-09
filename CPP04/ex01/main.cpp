/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:32:55 by mfrancis          #+#    #+#             */
/*   Updated: 2025/05/08 20:28:22 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int nbr_Animals = 6;
    const Animal* Animals[nbr_Animals];
     
    for(int i = 0; i < nbr_Animals;  i++)
    {
        if(i % 2 == 0)
            Animals[i] = new Dog; 
        else
            Animals[i] = new Cat;
    }
    std::cout << "\nAnimal sounds:\n";
    for (int i = 0; i < nbr_Animals; i++)
        Animals[i]->makeSound();
    std::cout << "\nDeleting Animals\n";
        for (int i = 0; i < nbr_Animals; i++)
            Animals[i]->makeSound();
            
    Dog original;

    std::cout << "\n\nDOG:\n";
    // Preenche o brain do original com "Meat"
    for (int i = 0; i < 100; i++)
        original.getBrain()->setIdea(i, "Meat");

    // Faz uma cópia profunda
    Dog copy = original;

    // Verifica se as ideias foram copiadas
    std::cout << "\n=== IDEIAS ANTES DA MUDANÇA ===\n";
    for (int i = 0; i < 5; i++)
    { // Podes limitar a 5 só para não ser gigante
        std::cout << "Original idea [" << i << "]: " << original.getBrain()->getIdea(i) << std::endl;
        std::cout << "Copy idea     [" << i << "]: " << copy.getBrain()->getIdea(i) << std::endl;
    }

    // Altera as ideias do original
    for (int i = 0; i < 100; i++)
        original.getBrain()->setIdea(i, "Sleep now.");

    // Verifica se a cópia manteve as ideias antigas
    std::cout << "\n=== IDEIAS DEPOIS DA MUDANÇA ===\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << "originalidea [" << i << "]: " << original.getBrain()->getIdea(i) << std::endl;
        std::cout << "Copy idea     [" << i << "]: " << copy.getBrain()->getIdea(i) << std::endl;
    }


    Cat originalC;

    std::cout << "\n\nCAT:\n";
    // Preenche o brain do original com "Meat"
    for (int i = 0; i < 100; i++)
        originalC.getBrain()->setIdea(i, "Meat");

    // Faz uma cópia profunda
    Cat copyC = originalC;

    // Verifica se as ideias foram copiadas
    std::cout << "\n=== IDEIAS ANTES DA MUDANÇA ===\n";
    for (int i = 0; i < 5; i++)
    { // Podes limitar a 5 só para não ser gigante
        std::cout << "Original idea [" << i << "]: " << originalC.getBrain()->getIdea(i) << std::endl;
        std::cout << "Copy idea     [" << i << "]: " << copy.getBrain()->getIdea(i) << std::endl;
    }

    // Altera as ideias do original
    for (int i = 0; i < 100; i++)
        original.getBrain()->setIdea(i, "Sleep now.");

    // Verifica se a cópia manteve as ideias antigas
    std::cout << "\n=== IDEIAS DEPOIS DA MUDANÇA ===\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Original idea [" << i << "]: " << original.getBrain()->getIdea(i) << std::endl;
        std::cout << "Copy idea     [" << i << "]: " << copyC.getBrain()->getIdea(i) << std::endl;
    }
 
    return (0);
}