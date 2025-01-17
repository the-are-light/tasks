
#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

void main() {

	setlocale(LC_ALL, "Russian");
	
	int size = 10;
	int* ptr = new int[size];

	for (int i = 0; i < size; i++)
	{
		ptr[i] = i + 1;
	}
	for (int i = 0; i < size; i++)
	{
		cout << "ptr[" << i << "] = " << setw(2) << setfill(' ') << ptr[i] << endl;
	}

	cout << ptr << endl;
	cout << &ptr << endl;
	cout << *(&ptr) << endl;
	cout << &ptr[0];

	delete[] ptr;

}
