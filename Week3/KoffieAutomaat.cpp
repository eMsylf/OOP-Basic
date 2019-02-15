//
// Created by Bob on 30-10-2018.
//

#include "KoffieAutomaat.h"

KoffieAutomaat::KoffieAutomaat() {
    Koffie lungo("Lungo", 0.50);
    Koffie espresso("Espresso", 0.50);
    Koffie cappuccino("Cappuccino", 1.00);
}

void KoffieAutomaat::ReceiveCoin(Munt munt) {
    std::cout << "Naam van ingeworpen munt: " << munt.GetName() << std::endl;
    std::cout << "Ingeworpen waarde: " << munt.GetValue() << std::endl;

    if (munt.GetValue() >= .50) {
        std::cout << "Lungo" << std::endl;
        std::cout << "Espresso" << std::endl;
    }
    if (munt.GetValue() >= 1.00) {
        std::cout << "Cappuccino" << std::endl;
    }
    if (munt.GetValue() == -1) {
        std::cout << "Lungo" << std::endl;
        std::cout << "Espresso" << std::endl;
        std::cout << "Cappuccino" << std::endl;
    }
}
