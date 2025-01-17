// Задача #4
// Задан числовой массив A[n].
// Найти длину самой длинной последовательности подряд идущих элементов массива, равных нулю(1).


#include <iostream>
#include <locale.h>

void main() {

	setlocale(LC_ALL, "Russian");
	// создаем массив длиной n = 15
	const int n = 15;
	int* arr = new int[n];
	// заполняем массив нулевыми элементами и i > 0
	for (int i = 0; i < 5; i++)
		arr[i] = i;
	for (int i = 5; i < 10; i++)
		arr[i] = 0;
	for (int i = 10; i < 12; i++)
		arr[i] = i - 3;
	for (int i = 12; i < n; i++)
		arr[i] = 0;

	// выводим послеовательность
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	// создаем счетчик нулевых элементов и максимальное количество
	// само решение начинается здесь
	int count = 0, maxCount = 0;

	for (int i = 0; i < n; i++) {

		if (arr[i] == 0) {
			// если arr[i] == 0 и count + 1 > maxCount то присваиваем maxCount = count 
			if (++count > maxCount)
				maxCount = count;
		}
		// если arr[i] != 0 то обнуляем счетчик
		else count = 0;
	}

	std::cout << "Количество максимальных элементов: " << maxCount;

	delete[] arr;

}
