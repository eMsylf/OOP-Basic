//
// Created by Bob on 16-10-2018.
//

#ifndef WEEK3_KOFFIEMUNTJE_H
#define WEEK3_KOFFIEMUNTJE_H


#include <string>

class Koffiemuntje {
//Dit muntje kan worden ingewisseld voor elke drank
//Neemt de waarde van de gekozen drank aan?

private:
    float value;
    std::string name;

public:
    float GetValue(float value);

};


#endif //WEEK3_KOFFIEMUNTJE_H
