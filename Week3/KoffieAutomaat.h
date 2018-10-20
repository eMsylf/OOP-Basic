//
// Created by Bob on 16-10-2018.
//

#ifndef WEEK3_KOFFIEAUTOMAAT_H
#define WEEK3_KOFFIEAUTOMAAT_H

#include <string>
///Summary
/*
 * De KoffieAutomaat class bevat:
 * o 3 methods om de verschillende muntjes te ontvangen
 * o 3 methods om 3 verschillende soorten koffie te leveren tegen 3 verschillende prijzen
 * De automaat beeldt ook af
 * o welke munt is ingeworpen
 * o welke soort koffie je kunt kopen
 */


class KoffieAutomaat {

private:
    std::string koffie;
    std::string espresso;
    std::string cappuccino;


public:
    std::string DisplayCoin();

};


#endif //WEEK3_KOFFIEAUTOMAAT_H
