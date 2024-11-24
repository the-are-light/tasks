#include <iostream>

void main()
{
    // РУССКАЯ ПИРАМИДА
    double a, r;
    std::cout << "Enter a, r: ";
    std::cin >> a >> r;
    int t = ((a / (2 * r)) * ((a / (2 * r)) - 1)) / 2;
    std::cout << t;
}