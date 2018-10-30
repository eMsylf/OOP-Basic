//
// Created by Bob on 16-10-2018.
//

#ifndef WEEK3_MUNT_H
#define WEEK3_MUNT_H


#include <string>

virtual class Munt {
// Abstractie van alle beschikbare munten

private:
    std::string name;
    float value;

public:
    virtual std::string GetName();
    virtual std::string GetValue();

};


#endif //WEEK3_MUNT_H
