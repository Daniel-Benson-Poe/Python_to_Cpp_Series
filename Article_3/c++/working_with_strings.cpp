#include <iostream>
#include <string>

int main()
{
    std::string a = "Hello";
    std::string b = " readers!";

    std::cout << "In C++ we can append strings together using the '+' operand." << std::endl;
    std::cout << a + b << std::endl;

    std::cout << "The string in variable a has 5 characters in it: " << a.length() << std::endl;
    
    std::cout << "Index 0 in the string 'Hello' is 'H': " << a[0] << std::endl;

    std::cout << "We can access the 'o' in Hello by calling index 4 of that string: " << a[4] << std::endl;

    std::cout << "Accessing specific groups of characters within a string in C++ is done a bit differently.\n";
    std::cout << "In C++ the string class, called into the program using the #include <string> above," <<
    "builds an array from the characters passed to a given variable.\n";
    std::cout << "For example, the variable a initialized above with the string 'Hello' behind the scenes is an array " <<
    "of characters: ['H'], ['e'], ['l'], ['l'], ['o'].\n";
    std::cout << "To access multiple characters for use from a string we create a new variable to which we will initialize " <<
    "the grouped characters.\n";

    std::string c(b, 1, 4); // where c is the new variable, b is the variable we are accessing, 1 is the starting index and 4 is how many indices we are including
    std::cout << c << std::endl;
    std::cout << c.length() << std::endl;

    std::cout << "We can also access the last character of a string though it takes some creativity.\n";
    std::cout << "We can use the length of the string that we want to access as the starting index.\n";
    std::cout << "Remember to subtract the length by one to access the correct index, because indices begin with 0 instead of 1.\n";
    std::string d(b, b.length()-1, 1);
    std::cout << d << std::endl;
    std::cout << d.length() << std::endl;

    std::cout << "We can access the second to last character by subtracting the length by 2 and not changing the returned number of characters.\n";
    std::string e(b, b.length()-2, 1);
    std::cout << e << std::endl;
    std::cout << e.length() << std::endl;

    std::cout << "We can access the third to last character by subtracting the length by 3 and not changing the returned number of characters.\n";
    std::string f(b, b.length()-3, 1);
    std::cout << f << std::endl;
    std::cout << f.length() << std::endl;

    std::cout << "We can access groupings of characters from the end of the string by changing the number of characters we wish to return.\n";
    std::string e(b, b.length()-2, 2);
    std::cout << e << std::endl;
    std::cout << e.length() << std::endl;

    std::string f(b, b.length()-3, 3);
    std::cout << f << std::endl;
    std::cout << f.length() << std::endl;

    std::string g(b, b.length()-4, 4);
    std::cout << g << std::endl;
    std::cout << g.length() << std::endl;

    return 0;
}