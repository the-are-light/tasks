#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Преобразование в двоичную систему через посредника(файл)" << endl;
    double n = 123.456, x;
    x = n - (int)n;
    int num = (int)n;
    int binValue = 0x40000000;

    ofstream out("data01.txt");
    if (!out.is_open()) cout << "File data01.txt not created";
    

    out << num << endl << x;

    out.close();


    ifstream in("data01.txt");
    int fnum; double fx;
    in >> fnum >> fx;
    cout << "Данные, прочитанные из файла: " << endl;
    cout << "  Число, после запятой: " << fx << endl << "  Целое значение числа: " << fnum;
    cout << endl;
    in.close();

    cout << "Число в двоичной системе счисления: " << endl;


    ofstream fout("output_data.txt");
    if (!fout.is_open()) 
        cout << "Не удалось открыть файл output_data.txt для записи." << endl;
    


    while (binValue > num) binValue >>= 1;

    while (binValue > 0) {
        if (num >= binValue) {
            fout << "1";
            num -= binValue;
        }
        else fout << "0";
        
        binValue >>= 1;
    }

    fout << ".";

    for (int i = 0; i < 24; i++) {
        x *= 2;
        fout << (int)x;
        x -= (int)x;
        if (x <= 1e-8) break; 
    }

    fout << endl;
    fout.close();

    cout << "Двоичное представление числа 123.456 записано в binary_output.txt" << endl;

    return 0;
}
