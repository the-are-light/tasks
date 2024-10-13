
#include<iostream>
void main()
{
	float a, b;
	std::cout << "Enter a and b:";
	std::cin >> a >> b;

	for (int x = -a; x <= a; x++) for (int y = -b; y <= b; y++) {
		if (x * x / a * a + y * y / b * b <= 1) 
			std::cout << "The point inside the ellipse is equal to: " << "[" << x << ';' << y << ']' << std::endl;
	}
}