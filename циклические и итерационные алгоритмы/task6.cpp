#include <iostream>
#include <math.h>

// БИНОМ НЬЮТОНА
long fact(int x) {
    long f = 1;
    for (int i = 1; i <= x; i++) f *= i;
    return f;
}

double sum(double x, double m) {
    double o = 0;
    for (int i = 0; i <= m; i++) o += fact(m) / (fact(i) * fact(m - i)) * pow(x, i);
    return o;
}

void main() {
    int m, x;
    std::cout << "Enter the values of x and m to solve the Newton binomial: "; std::cin >> x >> m;
    std::cout << "Answer: " << sum(x, m);
}
