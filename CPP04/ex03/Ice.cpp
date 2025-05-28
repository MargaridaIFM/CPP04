#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
}
Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
    return(new Ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << " 's wounds *" << std::endl;
}