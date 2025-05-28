#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
     for(int i= 0; i < 4; i++)
        _inventory[i] = 0;
}
 
MateriaSource::~MateriaSource()
{
    for(int i= 0; i < 4; i++)
       if (_inventory[i])
        delete _inventory[i];
}
    
void MateriaSource::learnMateria(AMateria   *m)
{
    for(int i = 0; i < 4; i++)
    {
        if(_inventory[i] == 0)
        {
            _inventory[i] = m->clone();
            return ;
        }
    }
    //delete m;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if(_inventory[i] != 0)
        {
            if(_inventory[i]->getType() == type)
                return _inventory[i]->clone();
        }
    }
    return NULL;
}