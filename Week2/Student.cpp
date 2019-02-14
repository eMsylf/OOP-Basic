//
// Created by Bob on 2-10-2018.
//

#include "Student.h"

Student::Student(std::string _naam, int _leeftijd, bool _depressie) : Persoon(_naam, _leeftijd) {
    depressie = _depressie;
}

bool Student::getDepressie() {
    return depressie;
}
