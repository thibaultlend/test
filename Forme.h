#ifndef FORME_H_INCLUDED
#define FORME_H_INCLUDED

#include <iostream>

class Forme
{
private:
    unsigned int m_nbCote;
    std::string m_nom;

public:
    Forme();
    Forme(unsigned int const nbCote, std::string const nom);

    void setNbCote(unsigned int const nbCote);
    void setNom(std::string const nom);

};

#endif // FORME_H_INCLUDED

//b33