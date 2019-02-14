//
// Created by Bob on 2-10-2018.
//

#ifndef UNTITLED_DOCENT_H
#define UNTITLED_DOCENT_H

#include "Persoon.h"

class Docent : public Persoon{
private:
    float salaris;

public:
    Docent(std::string _naam, int _leeftijd, float _salaris);
    float getSalaris();
};


#endif //UNTITLED_DOCENT_H
