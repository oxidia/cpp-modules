#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    for (int i = 0; i < 4; i++)
    {
        delete this->inventory[i];
        this->inventory[i] = NULL;

        if (other.inventory[i] != NULL)
            this->inventory[i] = other.inventory[i]->clone();
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->inventory[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (m == NULL)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m->clone();
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    AMateria *m;

    for (int i = 0; i < 4; i++)
    {
        m = this->inventory[i];
        if (m != NULL && m->getType() == type)
        {
            return m->clone();
        }
    }
    return NULL;
}
