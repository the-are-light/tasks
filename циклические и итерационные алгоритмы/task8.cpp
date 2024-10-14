#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

void main() {
	double e, n = 1.0;
	std::cout << "Enter inaccuracy: "; std::cin >> e;
	while (M_E - pow(1 + 1 / n, n) >= e) n++;
	std::cout << "The expression under study differs from M_E by a inaccuracy " << e << " at n = " << n << std::endl << "Result: " << M_E - pow(1 + 1 / n, n);
}
//0.00023546
