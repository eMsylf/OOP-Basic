//
// Created by Bob on 30-10-2018.
//

#ifndef WEEK3_EEN_EURO_H
#define WEEK3_EEN_EURO_H

#include <string>
#include "Munt.h"

class Een_Euro : public Munt{
    //Munt met een waarde van €1,00

private:
    std::string name = "euro";
    float value = 1.00;

};


#endif //WEEK3_EEN_EURO_H
