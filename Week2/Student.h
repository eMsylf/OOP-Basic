//
// Created by Bob on 2-10-2018.
//

#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H

#include "Persoon.h"

class Student : public Persoon{
private:
    bool depressie;

public:
    Student(std::string _naam, int _leeftijd, bool _depressie);
    bool getDepressie();
};


#endif //UNTITLED_STUDENT_H
