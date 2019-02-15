//
// Created by Bob on 30-10-2018.
//

#ifndef WEEK3_KOFFIEMUNTJE_H
#define WEEK3_KOFFIEMUNTJE_H

#include "Munt.h"
#include <string>

class Koffiemuntje : public Munt {
//Dit muntje kan worden ingewisseld voor elke drank
//Neemt de waarde van de gekozen drank aan?

private:
    std::string name = "koffiemuntje";
    float value = -1;

};


#endif //WEEK3_KOFFIEMUNTJE_H
