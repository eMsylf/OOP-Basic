//
// Created by Bob on 18-10-2018.
//

#ifndef WEEK5_BROODMANDJE_H
#define WEEK5_BROODMANDJE_H


#include <string>
#include "Broodje.h"

class Broodmandje {
public:
    //Constructor
    Broodmandje();
    //Copy-constructor
    Broodmandje(const Broodmandje& b);
    //Destructor
    ~Broodmandje();
    //Assignment operator
    Broodmandje& operator=(const Broodmandje& b);

    void toon();

    void voegToe(std::string type);

private:
    Broodje* broodje = new Broodje();
};


#endif //WEEK5_BROODMANDJE_H
