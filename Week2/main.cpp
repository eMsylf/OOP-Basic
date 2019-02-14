#include <iostream>

//#include "Persoon.h"
#include "Docent.h"
#include "Student.h"

int main() {

    Student student("lol", 12, true);
    Docent docent("ayylmao", 36, 1500);
    Docent docent1("roflcopter", 648, 3000000);

    std::cout << "Hello, World!" << std::endl;

    std::cout << "Student naam: " << student.getName() << std::endl;
    std::cout << "Student leeftijd: " << student.getAge() << std::endl;
    std::cout << "Student heeft depressie: " << student.getDepressie() << std::endl;
    std::cout << "-----" << std::endl;
    std::cout << "Docent naam: " << docent.getName() << std::endl;
    std::cout << "Docent leeftijd: " << docent.getAge() << std::endl;
    std::cout << "Docent salaris: " << docent.getSalaris() << std::endl;
    std::cout << "-----" << std::endl;
    std::cout << "Docent naam: " << docent1.getName() << std::endl;
    std::cout << "Docent leeftijd: " << docent1.getAge() << std::endl;
    std::cout << "Docent salaris: " << docent1.getSalaris() << std::endl;
    return 0;
}