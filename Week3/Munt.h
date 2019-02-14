//
// Created by Bob on 30-10-2018.
//

#ifndef WEEK3_MUNT_H
#define WEEK3_MUNT_H


#include <string>

class Munt {
// Abstractie van alle beschikbare munten

private:
    std::string name;
    float value;

public:
    virtual std::string GetName();
    virtual float GetValue() = 0; //a pure virtual function is what makes a class abstract

};


#endif //WEEK3_MUNT_H
