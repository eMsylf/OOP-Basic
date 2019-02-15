//
// Created by Bob on 14-2-2019.
//

#ifndef WEEK3_KOFFIE_H
#define WEEK3_KOFFIE_H

#include <string>

class Koffie {
private:
    std::string coffeeName;
    float coffeePrice;

public:
    Koffie(std::string _coffeeName, float _coffeePrice);
    std::string GetName();
    float GetPrice();

};


#endif //WEEK3_KOFFIE_H
