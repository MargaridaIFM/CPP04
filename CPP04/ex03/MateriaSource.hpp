#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria *_inventory[4];
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator=(const MateriaSource &other);
        
    public:
        MateriaSource();
        MateriaSource(std::string name);
        ~MateriaSource();

        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);
};

#endif