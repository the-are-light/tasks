#include <iostream>
#include <math.h>

void main()
{
    // КОММЕРЦИЯ
    float k, p, s, t;
    std::cout << "Enter the starting capital, the monthly percentage in decimal format and the amount sufficient to buy your own store: ";
    std::cin >> k >> p >> s;
    t = log(s / k) / 12 / (log(1 + p / 100));
    std::cout << "Mounths: " << t << std::endl << "Years: " << (int)((t / 12) + 0.5);
}