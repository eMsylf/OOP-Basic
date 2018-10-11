#include <iostream>
#include <fstream>

int main() {
    //std::cout << "Hello, World!" << std::endl;

    //char in_stream;

    std::ifstream in_stream;

    in_stream.open("C:/Users/Bob/Documents/GitHub/OBOPB/Les4/jabberwocky.txt");

    if (!in_stream) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(1);
    }

    char ch;
    in_stream.get(ch);
    std::cout << ch << std::endl;

    while (!in_stream.eof()) {
        in_stream.get(ch);
        std::cout << ch;
    }

    in_stream.close();

    return 0;
}