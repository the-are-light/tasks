#include <iostream>
#include <locale.h>

using namespace std;

void main()
{

	setlocale(LC_ALL, "Russian");

	const int a = 4;
	int* arr = new int[a];

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 0;

	int m = 0;

	for (int i = 0; i < a; i++) {
		int power = 1;
		for (int j = 0; j < i; j++) power <<= 1;
		m += arr[i] * power;
	}

	int n = 0;
	int c = 0;
	int* new_arr = new int[a];

	for (int i = a-1; i >= 0; i--) new_arr[i] = 0;
	new_arr[0] = 1;

	for (int i = a-1; i > 0; i--) {
		
		new_arr[i] ^= arr[i];
		// думал как решить 7+1 и примеры, приводящие к числам, кратным 2;
		//if ( (new_arr[i] ^ arr[i]) == 0 && arr[i] == 1) new_arr[i-1] = 1;


		cout << new_arr[i] << endl;
	}


	for (int i = 0; i < a; i++) {
		int power = 1;
		for (int j = 0; j < i; j++) power <<= 1;
		n += new_arr[i] * power;
	}

	cout << m << " " << n;
	delete[] arr; delete[] new_arr;

}