//
// Created by Bob on 30-10-2018.
//

#ifndef WEEK5_BIBLIOTHEEK_H
#define WEEK5_BIBLIOTHEEK_H

#include "Boek.h"
#include <string>

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


#endif //WEEK5_BIBLIOTHEEK_H
