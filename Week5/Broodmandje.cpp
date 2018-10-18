//
// Created by Bob on 18-10-2018.
//

#include <iostream>
#include "Broodmandje.h"

#include <string>

Broodmandje::Broodmandje() {}

void Broodmandje::toon() {
    std::cout << "  Broodmandje bevat " << broodje.type << std::endl;
}

void Broodmandje::voegToe(std::string type) {
    broodje = new Broodje(type);
}

Broodmandje::Broodmandje(const Broodmandje& b) {
    broodje = new Broodje(b.broodje->type);
}

Broodmandje::~Broodmandje() {
    delete broodje;
}

Broodmandje &Broodmandje::operator=(const Broodmandje &b) {
    //Safe self-assignment
    if (this != &b) {
        //Als er al een broodje aanwezig is, wordt het broodje gedeletet zodat er geen memory leak ontstaat
        if (broodje) {
            delete broodje;
        }
        broodje = new Broodje(b.broodje->type);
    }
    return *this;
}
