//
// Created by Bob on 30-10-2018.
//

#include "Bibliotheek.h"

#include <iostream>
#include <string>

Bibliotheek::Bibliotheek() {}

void Bibliotheek::toon() {
    std::cout << "  Bibliotheek bevat " << boek->type << std::endl;
}

void Bibliotheek::voegToe(std::string type) {
    boek = new Boek(type);
}

Bibliotheek::Bibliotheek(const Bibliotheek& b) {
    boek = new Boek(b.boek->type);
}

Bibliotheek::~Bibliotheek() {
    delete boek;
}

Bibliotheek &Bibliotheek::operator=(const Bibliotheek &b) {
    //Safe self-assignment
    if (this != &b) {
        //Als er al een broodje aanwezig is, wordt het broodje gedeletet zodat er geen memory leak ontstaat
        if (boek) {
            delete boek;
        }
        boek = new Boek(b.boek->type);
    }
    return *this;
}