#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	char original[81];
	char copy_str[81];

	char* start = original;
	char* end = original;
	char* start_copy = copy_str;

	cout << "Введите строку максимаьной длиной 80 символов: ";
	cin.getline(original, 81);

	while (*start == ' ') start++;
	while (*end != '/0') end++;
	end--;

	while (*end == ' ') end--;

	while (end >= start) {

		if (*start != ' ') {
			*start_copy++ = *start;
		}
		start++;
	}

	*start_copy++ = '/0';
	cout << endl << copy_str;

}
