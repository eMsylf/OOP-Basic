//
// Created by Bob on 2-10-2018.
//

#ifndef UNTITLED_PERSOON_H
#define UNTITLED_PERSOON_H

#include <string>

class Persoon {
private:
    int leeftijd;
    std::string naam;


public:
    Persoon(std::string _naam, int _leeftijd);
    int getAge();
    std::string getName();
};

#endif //UNTITLED_PERSOON_H
