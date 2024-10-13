#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

void main() {
    float a = 5.0; int x = 0;
    for (float i = 0; i <= a; i += 0.1) if (cos(i) == cos(-i)) x = 2;
    for (float i = 0; i <= a; i += 0.1) if (-cos(i) == cos(-i)) x = 1;
    for (float i = 0; i <= a; i += 0.1) if (cos(i) != cos(-i) && -cos(i) != cos(-i)) x = 0;

    if (x == 2) std::cout << "The function is even" << std::endl;
    else if (x == 1) std::cout << "The function is odd" << std::endl;
    else std::cout << "The function is not odd and not even" << std::endl;
}