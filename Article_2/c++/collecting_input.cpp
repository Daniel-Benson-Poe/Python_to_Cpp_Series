#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
    std::string a;
    int b;
    double c;
    bool d;

    std::cout << "Type in a phrase: \n";
    getline(std::cin, a);
    std::cout << "Type in a whole number: \n";
    std::cin >> b;
    std::cout << "Type in a decimal number: \n";
    std::cin >> c;
    std::cout << "Type in 'True' or 'False': \n";
    std::cin >> d;

    std::cout << a << std::endl;
    std::cout << typeid(a).name() << std::endl;
    std::cout << b << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << c << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << d << std::endl;
    std::cout << typeid(d).name() << std::endl;

    
    return 0;
}
