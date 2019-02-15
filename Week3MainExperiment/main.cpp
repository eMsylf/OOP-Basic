#include <iostream>
#include <string>

class Munt {
private:
    std::string name;
    virtual float value = 0;
public:
    std::string GetName() {
        return name;
    }
    float GetValue() {
        return value;
    }
};

class Vijftig_Cent : public Munt {
private:
    std::string name = "vijftig cent muntje";
    float value = 0.50;
};

int main() {
    std::cout << "Hallo, dit is een test om te kijken of ik het hele koffieapparaat in de main kan modelleren" << std::endl;

    std::cout << "---------" << std::endl;

    Munt muntje;
    Vijftig_Cent vijftig_cent = Vijftig_Cent();

    std::cout << "Munt naam: " << vijftig_cent.GetName() << std::endl;

    std::cout << "Munt naam: " << muntje.GetName() << std::endl;
    std::cout << "Munt waarde: \u20AC" << muntje.GetValue() << std::endl;

    return 0;
}