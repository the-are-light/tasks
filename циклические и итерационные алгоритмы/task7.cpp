

#include <iostream>
#include <math.h>

void main() {

	double e, x = 1.0;
	std::cout << "Enter inaccuracy: "; std::cin >> e;
	while (1 - sin(x) / x >= e) x /= 2;
	std::cout << std::endl << "Inaccuracy: " << e << " at x = " << x << std::endl << "Result: " << 1 - sin(x) / x;
}
//0.000390625
