#include <iostream>
#include <fstream>
using namespace std;

void main() {
    setlocale(LC_ALL, "Russian");

    const int PRIME_NUM = 1000;
    int primeFound = 0;
    int current = 2;
    int limit = 1;

    int primeArray[PRIME_NUM];
    bool isPrime = true;

    ofstream out("data.txt");

    while (primeFound < PRIME_NUM) {

        if ((limit + 1) * (limit + 1) <= current)
            limit++;

        for (int i = 0; i < primeFound && primeArray[i] <= limit; i++) {

            if (current % primeArray[i] == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            out << current << endl;
            primeArray[primeFound++] = current;
        }

        current++; isPrime = true;
    }

    out.close();

}