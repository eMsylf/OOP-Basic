//
// Created by Bob on 30-10-2018.
//

#ifndef WEEK3_VIJFTIG_CENT_H
#define WEEK3_VIJFTIG_CENT_H

#include "Munt.h"

class Vijftig_Cent : public Munt {
    //Waarde van €0,50

private:
    std::string name = "Vijftig cent";
    float value = .50;

public:
    std::string GetName() override;
    float GetValue() override;
};


#endif //WEEK3_VIJFTIG_CENT_H
