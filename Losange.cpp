#include "Losange.h"

Losange::Losange()
    :Forme(4, "Losange"), m_longeur(0)
{

}

Losange::Losange(int const longeur)
    :Forme(4, "Losange"), m_longeur(longeur)
{

}
//czciebvev
void Losange::setLongeur(int const longeur)
{
    m_longeur = longeur;
}

void Losange::affichage() const
{
    std::cout << "C'est un losange de longeur " << m_longeur << std::endl;
}
