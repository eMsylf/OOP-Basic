//
// Created by Bob on 16-10-2018.
//

#ifndef WEEK3_MUNT_H
#define WEEK3_MUNT_H


#include <string>

class Munt {
// Abstractie van alle beschikbare munten

private:
    std::string name;

public:
    virtual std::string GetName();

};


#endif //WEEK3_MUNT_H
