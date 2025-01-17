// Задача 6
//Дан одномерный массив.
// Все его элементы, не равные нулю, переписать(сохраняя их порядок) в начало массива, а нулевые элементы – в конец массива
// (новый массив не заводить) (1).

#include <iostream>
#include <locale.h>
using namespace std;

void main() {

	setlocale(LC_ALL, "Russian");

	const int a = 15;
	int* arr = new int[15];

	// заполняем массив и выводим его значения
	for (int i = 0; i < a / 2; i++) arr[i] = 0;
	for (int i = a / 2; i < a; i++) arr[i] = i;
	// Вывод массива
	cout << "Дан одномерный массив" << endl;
	for (int i = 0; i < a; i++) cout << arr[i] << " ";
	cout << endl;

	int n = 0;

	for (int i = 0; i < a; i++)
		if (arr[i] != 0) {
			arr[n] = arr[i];
			arr[i] = 0;
			i = ++n;
		}
	cout << "Перезапись массива (элементы, не равные нулю в начале массива)" << endl;
	for (int i = 0; i < a; i++) cout << arr[i] << " ";
	delete[] arr;

}