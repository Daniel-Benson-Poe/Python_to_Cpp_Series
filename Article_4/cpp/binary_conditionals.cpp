#include <iostream>

int main() {
    // boolean values
    std::cout << true << std::endl;
    std::cout << false << std::endl;

    // basic condition statements
    std::cout << (13 == 13) << std::endl;
    std::cout << (13 == 12) << std::endl;
    std::cout << (13 != 13) << std::endl;
    std::cout << (13 != 12) << std::endl;
    std::cout << (13 < 13) << std::endl;
    std::cout << (13 < 14) << std::endl;
    std::cout << (13 > 13) << std::endl;
    std::cout << (13 > 12) << std::endl;
    std::cout << (13 <= 13) << std::endl;
    std::cout << (13 <= 12) << std::endl;
    std::cout << (13 >= 13) << std::endl;
    std::cout << (13 >= 14) << std::endl;
    // std::cout << (13 == "Today") << std::endl;
    // std::cout << (13 != "Today") << std::endl;

    // Conditional statements
    bool a = true;
    bool b = false;

    if (a == true) {
        std::cout << "Hello readers\n";
    }
    else {
        std::cout << "a not true\n";
    } 

    if (b == true) {
        std::cout << "Hello again readers\n";
    }
    else {
        std::cout << "b not true\n";
    }

    int c = 5;

    if (c > 10){
        std::cout << "c is greater than 10\n";
    }
    else if (c > 5){
        std::cout << "c is greater than 5 but less than 10\n";
    }
    else if (c > 0){
        std::cout << "c is greater than 0 but less than 5\n";
    }
    else{
        std::cout << "c is a negative number\n";
    }

    int d;
    std::cout << "Type in a whole number\n";
    std::cin >> d;

    if (d > 1000){
        std::cout << "d is greater than 1000\n";
    }
    else if (d > 500){
        std::cout << "d is greater than 500 but less than 1000\n";
    }
    else if (d > 100){
        std::cout << "d is greater than 100 but less than 500\n";
    }
    else if (d > 0){
        std::cout << "d is greater than 0 but less than 100\n";
    }
    else{
        std::cout << "d is a negative number\n";
    }

    // Complex conditional statements
    int e = 200;
    int f = 6;

    if (e < 500 && e > 100)
    {
        std::cout << "e is between 100 and 500\n";
    }
    else if ( e < 100 && e > 0)
    {
        std::cout << "e is between 0 and 100\n";
    }
    else if (e < 0)
    {
        std::cout << "e is negative\n";
    }

    if (f > 100 || f < 0)
    {
        std::cout << "f is either greater than 100 or is a negative number\n";
    }
    else if (f < 100 || f > 0)
    {
        std::cout << "f is either less than 100 or is a positive number\n";
    }

    return 0;

}