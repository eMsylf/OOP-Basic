#include <iostream>
#include <fstream>

int main() {
    //std::cout << "Hello, World!" << std::endl;

    //char in_stream1;

    std::ifstream in_stream1;
    std::ifstream in_stream2;
    std::ofstream out_streamReverse;
    std::ofstream out_streamCombine;

    in_stream1.open("C:/Users/Bob/Documents/GitHub/OOP-Basic/Week4/jabberwocky.txt");
    in_stream2.open("C:/Users/Bob/Documents/GitHub/OOP-Basic/Week4/jabberwocky_lat.txt");
    out_streamCombine.open("C:/Users/Bob/Documents/GitHub/OOP-Basic/Week4/jabberwocky_combine.txt");
    out_streamReverse.open("C:/Users/Bob/Documents/GitHub/OOP-Basic/Week4/ykcowrebbaj.txt");

    if (!in_stream1) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(1);
    }
    if (!out_streamReverse) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(2);
    }

    char ch1;
    char ch2;
    int docLength = 0;

    /*
    in_stream1.get(ch);
    std::cout << ch << std::endl;
    */

    while (!in_stream1.eof()) {
        in_stream1.get(ch1);
        in_stream2.get(ch2);
        std::cout << ch1;
        docLength++;
        out_streamCombine.put(ch1);
        out_streamCombine.put(ch2);
    }

    /*
    while (docLength > 0) {
        in_stream1.get(ch1);
        docLength--;
    }
     */


    std::cout << "Doc length: " << docLength << " characters" << std::endl;


    in_stream1.close();
    out_streamReverse.close();


    return 0;
}