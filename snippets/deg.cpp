#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian");

    float deg, min, sec;
    deg = 1.125;
    min = 30.0; sec = 10.0;
    int a = -127;
    cout << "byte: " << sizeof(float) * 8 << endl;
    cout << "a = " << &deg << endl;

    //a = *(int*)&deg;

    cout << hex << a << endl;
    a = ( *(int*)&deg ) ^ INT_MIN; // обращение
    cout << *(float*)&a << endl;

    cout << ~INT_MAX << " " << INT_MIN << " " << (INT_MAX ^ -1) << endl;
    cout << INT_MAX << " " << ~INT_MIN << " " << (INT_MIN & 0) << endl;



    // как получить int-max и int-min для любого типа данных

    return 0;
}