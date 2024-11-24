#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
    // ПЕРЕВОД РАДИАННОЙ МЕРЫ В ГРАДУСЫ
    double rad, gradus, minute, second;
    std::cout << "Enter radian: ";
    std::cin >> rad;
    gradus = rad / M_PI * 180.0;
    minute = (int)(gradus * 60) % 60;
    second = (int)(gradus * 3600) % 60;
    std::cout << "Gradus: " << (int)gradus << std::endl << "Minute: " << abs(minute) << std::endl << "Second: " << abs(second);
}