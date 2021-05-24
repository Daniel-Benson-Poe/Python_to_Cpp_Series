#include <iostream>
#include <typeinfo>
#include <string>

int main()
{
    // C++
    // string
    std::string a = "Hello World!";
    std::cout << a << std::endl;
    std::cout << typeid(a).name() << std::endl;

    // int
    std::cout << 4 << std::endl;
    std::cout << typeid(4).name() << std::endl;

    // float
    float c = 4.5;
    std::cout << c << std::endl;
    std::cout << typeid(c).name() << std::endl;

    // double
    double d = 4.555555555555555555;
    std::cout << d << std::endl;
    std::cout << typeid(d).name() << std::endl;

    // bool
    std::cout << true << std::endl;
    std::cout << typeid(true).name() << std::endl;

    // char
    std::cout << 'a' << std::endl;
    std::cout << typeid('a').name() << std::endl;

    return 0;
}