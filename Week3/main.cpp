#include <iostream>
#include "KoffieAutomaat.h"
#include "Koffie.h"

int main() {

    std::cout << "Hello, World I am coffiezetapprattat!" << std::endl;

    std::cout << "pls gib coin" << std::endl;

    Koffiemuntje koffiemuntje;
    Vijftig_Cent vijftig_cent;
    Een_Euro een_euro;

    KoffieAutomaat koffieAutomaat;

    koffieAutomaat.ReceiveCoin(een_euro);

    return 0;
}
