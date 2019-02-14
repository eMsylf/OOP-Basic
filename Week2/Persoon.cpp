//
// Created by Bob on 2-10-2018.
//

#include "Persoon.h"

Persoon::Persoon(std::string _naam, int _leeftijd) {
    naam = _naam;
    leeftijd = _leeftijd;
}

int Persoon::getAge() {
    return leeftijd;
}

std::string Persoon::getName() {
    return naam;
}
