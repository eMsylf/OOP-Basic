//
// Created by Bob on 18-10-2018.
//

#ifndef WEEK5_BROODMANDJE_H
#define WEEK5_BROODMANDJE_H


#include <string>
#include "Broodje.h"

class Bibliotheek {
public:
    //Constructor
    Bibliotheek();
    //Copy-constructor
    Bibliotheek(const Bibliotheek& b);
    //Destructor
    ~Bibliotheek();
    //Assignment operator
    Bibliotheek& operator=(const Bibliotheek& b);

    void toon();

    void voegToe(std::string type);

private:
    Boek* boek = new Boek();
};


#endif //WEEK5_BROODMANDJE_H
