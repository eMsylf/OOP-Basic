#include <iostream>
#include <fstream>

int main() {
    /*
     * Ga steeds opnieuw de file door en loop dan naar het laatste karakter en schrijf dit karakter weg in de nieuwe file
     * Dan naar het karakter daarvoor en schrijf dit weg
     * Herhaal tot het begin van de file is bereikt
     */

    std::ifstream in_stream1;
    std::ifstream in_stream2;
    std::ofstream out_streamReverse;
    std::ofstream out_streamCombine;


    in_stream1.open("C:/Users/Bob/Documents/GitHub/OOP-Basic/Week4/jabberwocky.txt");
    in_stream2.open("C:/Users/Bob/Documents/GitHub/OOP-Basic/Week4/jabberwocky_lat.txt");
    out_streamCombine.open("C:/Users/Bob/Documents/GitHub/OOP-Basic/Week4/jabberwocky_combine.txt");
    out_streamReverse.open("C:/Users/Bob/Documents/GitHub/OOP-Basic/Week4/ykcowrebbaj.txt");

    if (!in_stream1) {
        std::cout << "Probleem bij openen file 1" << std::endl;
        exit(1);
    }

    if (!out_streamReverse) {
        std::cout << "Probleem bij openen file 2" << std::endl;
        exit(2);
    }

    char ch1;
    char ch2;
    int docLength = 0;
    int docLengthThisTime = 0;

    /*
    in_stream1.get(ch);
    std::cout << ch << std::endl;
    */


    //Om-en-om wegschrijven in nieuw bestand
    while (!in_stream1.eof()) {
        in_stream1.get(ch1);
        in_stream2.get(ch2);
        std::cout << ch1;
        docLength++;

        out_streamCombine.put(ch1);
        out_streamCombine.put(ch2);
    }

    in_stream1.close();
    in_stream2.close();



    std::cout << "Doc length: " << docLength << " characters" << std::endl << std::endl;
    int cycles = 0;

    std::cout << "Start cycles" << std::endl;
    while (docLength > 0) {
        in_stream1.open("C:/Users/Bob/Documents/GitHub/OOP-Basic/Week4/jabberwocky.txt");
        while (docLengthThisTime < docLength) {
            in_stream1.get(ch1);
            if (docLengthThisTime == docLength) {
                out_streamReverse.put(ch1);
            }
            docLengthThisTime++;
        }
        in_stream1.close();
        docLength--;
        cycles++;
    }

    std::cout << "Doc length: " << docLength << " characters" << std::endl;
    std::cout << cycles << std::endl;

    in_stream1.close();
    in_stream2.close();
    out_streamCombine.close();
    out_streamReverse.close();

    return 0;
}