#ifndef LOSANGE_H
#define LOSANGE_H

#include "Forme.h"

class Losange : public Forme
{
private:
    int m_longeur;

public:
    Losange();
    Losange(int const longeur);

    void setLongeur(int const longeur);

    void affichage() const;
};

#endif // LOSANGE_H

//b1 edit
