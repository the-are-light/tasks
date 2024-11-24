#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
    // ПЕРЕВОД ГРАДУСА В РАДИАННУЮ МЕРУ (ТОЛЬКО С ПОЛОЖИТЕЛЬНЫМИ ЗНАЧЕНИЯМИ)
    float gradus, minute, second, t;
    std::cout << "Enter gradus, minute and second: ";
    std::cin >> gradus >> minute >> second;
    t = (gradus + minute / 60 + second / 3600) * M_PI / 180;
    std::cout << "Converting degrees to radians: " << t;
}