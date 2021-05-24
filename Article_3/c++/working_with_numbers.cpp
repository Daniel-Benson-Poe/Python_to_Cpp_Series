#include <iostream>

int main()
{
    // # addition
    std::cout << "===================" << std::endl;
    std::cout << "ADDITION:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "1 + 1: " << 1 + 1 << std::endl;
    std::cout << "1.5 + 1.5: " << 1.5 + 1.5 << std::endl;
    std::cout << "1.5 + 1: " << 1.5 + 1 << std::endl;
    int a = 1;
    double b = 1.5;
    std::cout << "a (1) + a (1): " << a + a << std::endl;
    std::cout << "a (1) + b (1.5): " << a + b << std::endl;

    // # subtraction
    std::cout << "===================" << std::endl;
    std::cout << "SUBTRACTION:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "1 - 1: " << 1 - 1 << std::endl;
    std::cout << "1.5 - 1: " <<  1.5 - 1 << std::endl;
    std::cout << "a (1) - a (1): " <<  a - a << std::endl;
    std::cout << "b (1) - a (1): " <<  b - a << std::endl;

    // # multiplication
    std::cout << "===================" << std::endl;
    std::cout << "MULTIPLICATION:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "5 * 10: " << 5 * 10 << std::endl;
    std::cout << "2.5 * 5.5: " <<  2.5 * 5.5 << std::endl;
    std::cout << "2.5 * 10: " <<  2.5 * 10 << std::endl;
    int c = 5;
    int d = 10;
    double e = 2.5;
    std::cout << "c (5) * d (10): " <<  c * d << std::endl;
    std::cout << "e (2.5) * e (2.5): " <<  e * e << std::endl;

    // # division - floating point return
    std::cout << "===================" << std::endl;
    std::cout << "DIVISION — FLOATING POINT RETURN:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "10.0 / 2: " << 10.0/2 << std::endl;
    std::cout << "14 / 3.0: " <<  14/3.0 << std::endl;
    std::cout << "12.4 / 2.2: " <<  12.4/2.2 << std::endl;
    double f = 120;
    double g = 13;
    double h = 45;
    std::cout << "f (120.0) / g (13.0): " << f/g << std::endl;
    std::cout << "h (45.0) / g (13.0): " << h/g << std::endl;
    std::cout << "f (120.0) / h (45.0): " << f/h << std::endl;

    // # division - whole number return (not rounded, the fractional portion simply dropped)
    std::cout << "===================" << std::endl;
    std::cout << "DIVISION – WHOLE NUMBER RETURN:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "10 / 2: " <<  10/2 << std::endl;
    std::cout << "14 / 3: " <<  14/3 << std::endl;
    int i = 120;
    int j = 13;
    int k = 45;
    std::cout << "i (120) / j (13): " <<  i/j << std::endl;
    std::cout << "k (45) / j (13): " << k/j << std::endl;
    std::cout << "i (120) / k (45): " << i/k << std::endl;

    // # modulo
    std::cout << "===================" << std::endl;
    std::cout << "MODULO:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "10 % 2: " << 10%2 << std::endl;
    std::cout << "14 % 3: " <<  14%3 << std::endl;
    // std::cout << "10 % 2: " <<  12.4%2.2 << std::endl; cannot use modulo operand with floating point values in c++, only integers
    std::cout << "i (120) % j (13): " << i%j << std::endl;
    std::cout << "k (45) % j (13): " << k%j << std::endl;
    std::cout << "i (120) % k (45): " << i%k << std::endl;

    // # even/odd
    std::cout << "===================" << std::endl;
    std::cout << "MODULO - EVENS/ODDS:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "110 % 2: " << 110%2 << std::endl;
    std::cout << "111 % 2: " <<  111%2 << std::endl;
    int l = 2;
    std::cout << "8765 % l (2): " <<  8765%l << std::endl;
    std::cout << "86312 % l (2): " <<  86312%l << std::endl;

    return 0;
}