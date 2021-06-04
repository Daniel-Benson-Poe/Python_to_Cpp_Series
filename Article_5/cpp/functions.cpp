#include <iostream>
#include <string>

void printHelloWorld()
{
   std::cout << "Hello world!\n"; 
}

std::string gatherUserName()
{
    std::string name;
    std::cout << "What is your name?\n";
    std::cin >> name;
    return name;
}

void printUserNameByCalling()
{
    std::string name = gatherUserName();
    std::cout << "Your name is " << name << std::endl;
}

void printUserNameUsingParam(std::string name)
{
    std::cout << "Your name is " << name << std::endl;
}

int gatherNumber()
{
    int num;
    std::cout << "Enter number here: \n";
    std::cin >> num;
    return num;
}

int findSum(int num1, int num2)
{
    return num1 + num2;
}

int findDifference(int num1, int num2)
{
    return num1 - num2;
}

void printInfo(std::string name, int age, std::string location="unknown")
{
    std::cout << "Hello, your name is " << name << std::endl;
    std::cout << "You are " << age << " years old...\n";
    std::cout << "and you are from " << location << std::endl;
}

int main()
{
    printHelloWorld();

    std::string name = gatherUserName();
    std::cout << "Your name is " << name << std::endl;

    printUserNameByCalling();
    
    printUserNameUsingParam(name);

    int num1 = gatherNumber();
    int num2 = gatherNumber();
    std::cout << findSum(num1, num2) << std::endl;

    int num3 = gatherNumber();
    int num4 = gatherNumber();
    std::cout << findDifference(num3, num4) << std::endl;

    printInfo("Daniel", 32);
    printInfo("Daniel", 32, "Utah");

    return 0;
}