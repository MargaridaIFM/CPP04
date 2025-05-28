#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
}
Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
    return(new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}