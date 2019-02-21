#include <iostream>
#include <string>

class Munt {
public:
    std::string name;
    float value;


    float GetValue() {
        return value;
    }


    std::string GetName() {
        return name;
    }
};

class Vijftig_Cent : public Munt {
private:
    std::string name = "vijftig cent muntje";
    //float value = 0.50;

public:
    //const char* Name;
};

class EenEuro : public Munt {
private:


public:
    std::string name = "een euro muntje";
    /*std::string GetName () {
        return name;
    }*/


};

int main() {
    EenEuro eenEuro;

    std::cout << eenEuro.GetName() << std::endl; // deze shit wil de naam die ik bij EenEuro heb ingevoerd niet printen


    //std::cout << sizeof(Munt) << std::endl;
    //std::cout << sizeof(Vijftig_Cent) << std::endl;

    /*
    std::cout << "Hallo, dit is een test om te kijken of ik het hele koffieapparaat in de main kan modelleren" << std::endl;

    std::cout << "---------" << std::endl;

    Munt muntje;
    Vijftig_Cent vijftig_cent = Vijftig_Cent();

    std::cout << "Munt naam: " << vijftig_cent.GetName() << std::endl;

    std::cout << "Munt naam: " << muntje.GetName() << std::endl;
    std::cout << "Munt waarde: \u20AC" << muntje.GetValue() << std::endl;
    */
    return 0;
}