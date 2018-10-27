// 01_02_address.cpp : Defines the entry point for the console application.
//


#include <iostream>


int main()
{
    //Ch 1
    std::cout << "---Chapter 1---" << std::endl;
    int number = 240;		//define an int variable
    int* numPtr ;			//define an integer pointer numPtr
    numPtr = &number;		//assign the address to numPtr
    std::cout << "The address of number is: " << numPtr << std::endl << std::endl;

    //Ch 2
    std::cout << "---Chapter 2---" << std::endl;
    std::cout << "Size of boolean: " << sizeof(bool) << std::endl;
    std::cout << "Size of char: " << sizeof(char) << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of float: " << sizeof(float) << std::endl;
    std::cout << "Size of long: " << sizeof(long) << std::endl;
    std::cout << "Size of double: " << sizeof(double) << std::endl << std::endl;

    bool* pBool;
    char* pChar;
    int* pInt;
    std::cout << "Size of boolean ptr: " << sizeof(pBool) << std::endl;
    std::cout << "Size of char ptr: " << sizeof(pChar) << std::endl;
    std::cout << "Size of int ptr: " << sizeof(pInt) << std::endl << std::endl;

    //Ch 3
    std::cout << "---Chapter 3---" << std::endl;
    double values[10];
    double* pValue = values;
    std::cout << "value array address: " << values << std::endl;
    std::cout << "pValues: " << pValue << std::endl;

    int numbers[10];
    int* pNumbers = numbers;
    for (int i = 0; i < 10; i++) {
        std::cout << "numbers address " << i << ": " << pNumbers + i << std::endl;
    }

    //Ch 4
    std::cout << "---Chapter 4---" << std::endl;
    /*
    char initial = 'P';
    char* pInitial = &initial;
    std::cout << "Memory address for initial P: " << (void *)pInitial << std::endl;
    std::cout << "Memory address for initial P: " << static_cast<void *>(pInitial) << std::endl;


    const char* pans1{ "Absolutely yes" };
    const char* pans2{ "Absolutely no" };
    const char* pans3{ "The oracle is out, please try again later" };
    const char* pans4{ "Outlook is good" };
    const char* pans5{ "Today is your lucky day, yes" };
    const char* pans6{ "Try again tomorrow" };
    const char* pans7{ "Most certainly" };
    const char* pans8{ "The answer is unclear" };
    const char* pans{ "The oracle says..." };
    int choice{};

    std::cout << "Think of a yes/no question, then ask the oracle" << std::endl;
    std::cout << "Enter a number between 1 and 8: ";
    std::cin >> choice;
    switch (choice) {
        case 1:
            std::cout << pans << pans1 << std::endl;
            break;
        case 2:
            std::cout << pans << pans2 << std::endl;
            break;
        case 3:
            std::cout << pans << pans3 << std::endl;
            break;
        case 4:
            std::cout << pans << pans4 << std::endl;
            break;
        case 5:
            std::cout << pans << pans5 << std::endl;
            break;
        case 6:
            std::cout << pans << pans6 << std::endl;
            break;
        case 7:
            std::cout << pans << pans7 << std::endl;
            break;
        case 8:
            std::cout << pans << pans8 << std::endl;
            break;
        default:
            std::cout << "Sorry, you didn't choose a number between 1 and 8" << std::endl;
    }
   */

    //Ch 5
    std::cout << "---Chapter 5---" << std::endl;
    /*
    double testScores[5], sum=0;
    double* pTestScores;
    pTestScores = testScores;
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter the test score: " << std::endl;
        std::cin >> *(pTestScores + 1);
        sum += *(pTestScores + 1);
    }
    std::cout << "testScores: " << testScores << std::endl;
    std::cout << "Total for all students: " << sum << std::endl;
    std::cout << "Average score: " << sum / 5 << std::endl;
     */

    //Ch 6
    std::cout << "---Chapter 6---" << std::endl;
    /*
    int num = 10;
    int* pNum = &num;
    int** p2Num = &pNum;

    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Address stored in pNum: " << pNum << std::endl;
    std::cout << "Address of pNum: " << &pNum << std::endl;
    std::cout << "Address stored in p2Num: " << p2Num << std::endl;
    */

    int testScores2[5]{ 100, 95, 99, 85, 83 };
    int* pointerArray[5];
    for (int i = 0; i < 5; i++) {
        pointerArray[i] = &(testScores2[i]);
        std::cout << pointerArray[i] << std::endl;
        std::cout << *(pointerArray + i) << std::endl; //Single de-reference
        std::cout << **(pointerArray + i) << std::endl; //Double de-reference
    }

    //Ch7
    std::cout << std::endl << "---Chapter 7---" << std::endl;
    int* pointer(new int(55));
    std::cout << *pointer << std::endl;
    delete pointer;
    int* pArray(new int[5] {10, 20, 30, 40, 50});
    *(pArray + 1) += 5;
    std::cout << *pArray << ", " << *(pArray +1) << std::endl;
    delete pArray;

    return 0;
}

