#include "Forme.h"

Forme::Forme()
    :m_nbCote(0), m_nom("")
{

}

Forme::Forme(unsigned int const nbCote, std::string const nom)
    :m_nbCote(nbCote), m_nom(nom)
{

}

void Forme::setNbCote(unsigned int const nbCote)
{
    m_nbCote = nbCote;
}

void Forme::setNom(std::string const nom)
{
    m_nom = nom;
}
