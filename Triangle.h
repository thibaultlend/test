#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Forme.h"

class Triangle : public Forme
{
private:
    int m_longeur[3];

public:
    Triangle();
    Triangle(int const long1, int const long2, int const long3);

    void setLongeur(int const long1, int const long2, int const long3);

    void affichage() const;
};

#endif // TRIANGLE_H
