#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

double func(double x) {
    return cos(x);
}

int main()
{

    double a, eps = 1.0E-7, a_step; 
    int flag = 1;
    std::cout << "Enter the value of a, from which there will be a segment [-a;a]: ";
    std::cin >> a;
    std::cout << "Enter the value of a_step: ";
    std::cin >> a_step;

    for (double x = -a; x <= a; x += a_step) {
        if (fabs(func(x) - func(-x) > eps)) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        std::cout << "Is even";
        return 0;
    }
    flag = 1;
    for (double x = -a; x <= a; x += a_step) {
        if (fabs(func(x) + func(-x) > eps)) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        std::cout << "Is odd";
        return 0;
    }

    else {
        std::cout << "Is diff";
    }


}

