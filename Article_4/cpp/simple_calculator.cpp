// Calculator used for simple calculations; addition, 
// subtraction, multiplication, division, and remainder
#include <iostream>

int main(){
    std::cout << "Welcome to the basic calculator!\n";
    std::cout << "You will first choose two numbers,\n";
    std::cout << "then you will tell me what calculation you\n";
    std::cout << "wish to perform on those two numbers by\n";
    std::cout << "typing in the symbol corresponding to that calculation.\n";
    std::cout << "For instance if you wanted to add the numbers 2 and 4 together\n";
    std::cout << "you would give me the numbers 2 and 4\n";
    std::cout << "then when prompted give me the symbol '+'.\n";
    std::cout << "After a quick behind-the-scenes calculation\n";
    std::cout << "I will give you the answer.\n";
    // Start by gathering user input
    double a;
    double b;
    // Get user's numbers
    std::cout << "Input your first number here: \n";
    std::cin >> a;
    std::cout << "Input your second number here: \n";
    std::cin >> b;
    // Get user's desired calculation
    std::cout << "Insert the symbol corresponding to your desired calculation\n";
    std::cout << "using the symbols +, -, /, or *: \n";
    char c;
    std::cin >> c;
    // Calculate the user's request 
    double calc;
    if (c == '+'){
        calc = a + b;
    }
    else if (c == '-'){
        calc = a - b;
    }
    else if (c == '/'){
        calc = a / b;
    }
    else if (c == '*'){
        calc = a * b;
    }
    else{
        std::cout  << "You entered an invalid character, please try again...\n";
        return 0;
    }
    std::cout << calc << std::endl;
    return 0;
}

// # Get user's desired calculation
// print("Insert the symbol corresponding to your desired calculation")
// print("using the symbols +, -, /, or *: ")
// c = input()
// # calculate the user's request
// if c == '+':
//     calc = num_1 + num_2
// elif c == '-':
//     calc = num_1 - num_2
// elif c == '/':
//     calc = num_1 / num_2
// elif c == '*':
//     calc = num_1 * num_2
// else:
//     print("You entered an invalid character, please try again...")
//     quit()
// print(calc)