#include <iostream>
#include "Bibliotheek.h"


void geefMandjeDoor(Bibliotheek* theek) {
    std::cout << "Mandje gekregen" << std::endl;
    theek->toon();

    theek->voegToe("Croissant");
    theek->toon();
}

int main() {
    std::cout << "Mandje maken" << std::endl;
    Bibliotheek* theek = new Bibliotheek();
    theek->toon();

    theek->voegToe("Ciabatta");
    theek->toon();

    geefMandjeDoor(theek);

    std::cout << "Mandje teruggekregen" << std::endl;
    theek->toon();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}