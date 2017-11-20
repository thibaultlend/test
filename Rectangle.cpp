#include "Rectangle.h"

Rectangle::Rectangle()
    :Forme(4, "Rectangle"), m_largeur(0), m_longeur(0)
{

}

Rectangle::Rectangle(int const longeur, int const largeur)
    :Forme(4, "Rectangle"), m_largeur(largeur), m_longeur(longeur)
{

}

void Rectangle::setLongeur(int const longeur)
{
    m_longeur = longeur;
}

void Rectangle::setLargeur(int const largeur)
{
    m_largeur = largeur;
}

void Rectangle::affichage() const
{
    std::cout << "C'est un rectangle de longeur " << m_longeur << " et de largeur " << m_largeur << std::endl;
}
