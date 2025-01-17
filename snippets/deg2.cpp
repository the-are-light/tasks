#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian");

    float deg, min, sec;
    deg = - 1.125; // последовательность бит;
    min = 30.0; sec = 10.0;
    int a = 127;
    cout << "byte: " << sizeof(float) * 8 << endl;
    cout << "a = " << &deg << endl;

    a = *(int*)&deg;

    cout << hex << a << endl;

    int sign = a >> 31;
    cout << dec << sign;

    return 0;
}
