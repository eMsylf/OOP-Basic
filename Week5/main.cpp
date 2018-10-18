#include <iostream>
#include "Broodmandje.h"


void geefMandjeDoor(Broodmandje* mandje) {
    std::cout << "Mandje gekregen" << std::endl;
    mandje->toon();

    mandje->voegToe("Croissant");
    mandje->toon();
}

int main() {
    std::cout << "Mandje maken" << std::endl;
    Broodmandje* mandje = new Broodmandje();
    mandje->toon();

    mandje->voegToe("Ciabatta");
    mandje->toon();

    geefMandjeDoor(mandje);

    std::cout << "Mandje teruggekregen" << std::endl;
    mandje->toon();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}