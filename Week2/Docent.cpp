//
// Created by Bob on 2-10-2018.
//

#include "Docent.h"

Docent::Docent(std::string _naam, int _leeftijd, float _salaris) : Persoon(_naam, _leeftijd) {
    salaris = _salaris;
}

float Docent::getSalaris() {
    return salaris;
}

