

#include "Triangle.h"

Triangle::Triangle()
    :Forme(3, "Triangle"), m_longeur{0, 0, 0}
{

}

Triangle::Triangle(int const long1, int const long2, int const long3)
    :Forme(3, "Triangle"), m_longeur{long1, long2, long3}
{

}

void Triangle::setLongeur(int const long1, int const long2, int const long3)
{
    m_longeur[0] = long1; // dvyvd
    m_longeur[1] = long2;
    m_longeur[2] = long3;
}

// un autre

void Triangle::affichage() const
{
    std::cout << "C'est un triangle de longeur " << m_longeur[0] << ", " << m_longeur[1] << ", " << m_longeur[2] << std::endl;
}

//eefeffe la suite
