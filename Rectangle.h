#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Forme.h"

class Rectangle : public Forme
{
private:
    int m_largeur;
    int m_longeur;

public:
    Rectangle();
    Rectangle(int const longeur, int const largeur);

    void setLongeur(int const longeur);
    void setLargeur(int const largeur);

    void affichage() const;
};

#endif // RECTANGLE_H_INCLUDED
