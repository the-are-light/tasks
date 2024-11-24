#include <iostream>

void main()
{
    // ВЕРШИНА ПАРАБОЛЫ
    int a, b, c, x0, y0;
    std::cout << "Enter a, b, c: ";
    std::cin >> a >> b >> c;
    x0 = -b / 2 * a;
    y0 = (4 * a * c - b * b) / 4 * a;
    std::cout << "x0: " << x0 << std::endl << "y0: " << y0;
}

