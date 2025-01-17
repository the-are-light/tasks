#include <iostream>
#include <locale.h>
using namespace std;

// прототип функции
// вычисление наибольшего общего делителя
int getNOD(int a, int b); // без объявления войны идентификатор не будет определён
// здесь a и b - формальные переменные


void main() {

	setlocale(LC_ALL, "Russian");
	int a = 15;
	int b = 10;
	// здесь a и b - фактические переменные
	int c = getNOD(a, b);
	cout << "NOD(" << &a << "," << b << ") = " << c;

}

// определение функции
int getNOD(int a, int b) {

	while (a != b) {
		if (a < b) b -= a;
		else a -= b;
	}
	return a;
}
