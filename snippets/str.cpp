#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	// создание переменных
	char original_str[81];
	char copy_str[81];
	char* start = original_str;
	char* end = original_str;
	char* cop = copy_str;
	bool space = true;

	// определяем указатель на конечный символ массива

	while (*end != '\0') end++;
	cop += 80;
	*cop = '/0';
	cop--;
	// дальше предположения
	end--;

	cout << "Введите строку максимальной длины 80 символов: " << endl;
	cin.getline(original_str, 81);

	while (start <= end) {
		if (*end != ' ') {
			*cop-- = *end;
			space = false;
		}
		else if (!space) {
			*cop-- = ' ';
			space = true;
		}
		end--;
	}

	while (cop--) *cop = ' ';

	cout << endl << copy_str;

}


================================


#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	char original_str[81];
	char copy_str[81];
	
	cout << "Введите строку максимальной длины 80 символов: " << endl;
	cin.getline(original_str, 81);

	char* start = original_str;
	char* end = original_str;
	char* start_copy = copy_str;

	while (*start == ' ') start++;
	while (*end != '\0') end++;
	end--;

	bool space = true;

	while (start <= end) {

		if (*start != ' ') {
			*start_copy++ = *start;
			space = false;
		}
		else if (!space) {
			*start_copy++ = ' '; space = true;
		}
		start++;
	}

	*start_copy = '\0';

	cout << endl << original_str << endl << endl << copy_str;




}
