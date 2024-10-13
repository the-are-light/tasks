#include <iostream>
#include <math.h>
#include <iomanip>

void main() {
	//   ИЗ МИЛЬ В КМ
	const double miles_to_km = 1.609344;

	int k;
	std::cout << "Enter kilometers: "; std::cin >> k;

	std::cout << "---------------" << std::endl;
	std::cout << "| km in miles |" << std::endl;
	std::cout << "---------------" << std::endl << std::endl;
	std::cout << std::setw(4) << "km" << " |" << std::setw(6) << " miles" << std::endl;
	std::cout << "------------------" << std::endl;

	for (int m = 1; m <= k; m++) {
		std::cout << "|" << std::setw(3) << m << " |" << std::setw(8) << std::fixed << std::setprecision(4) << m / miles_to_km << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << "---------------" << std::endl;
	std::cout << "| miles in km |" << std::endl;
	std::cout << "---------------" << std::endl << std::endl;
	std::cout << std::setw(3) << "m" << "  |" << std::setw(4) << " km" << std::endl;
	std::cout << "------------------" << std::endl;

	for (int km = 1; km <= k; km++) {
		std::cout << "|" << std::setw(3) << km << " |" << std::setw(8) << std::fixed << std::setprecision(4) << km * miles_to_km << std::endl;
	}
}