#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Перевод из p-ичной системы счисления в 10-чную" << endl;
    int p;

    do
    {
        cout << "Введите основание системы счисления (2...36): ";
        cin >> p;
    } while (p < 2 || p > 36);

    const int MAX_LEN = 30;

    cout << "Введите число (не более 30 знаков): ";
    char x[MAX_LEN + 1];
    cin.getline(x, 1, '\n');
    cin.getline(x, MAX_LEN + 1, '\n');

    int n = 0;

    for (int i = 0; x[i] != 0; i++)
    {

        n *= p;
        int d = -1;

        if (x[i] >= '0' && x[i] <= '9')
            d = x[i] - '0';
        else if (x[i] >= 'a' && x[i] <= 'z')
            d = 10 + x[i] - 'A';
        if (d < 0 || d >= p)
        {
            cout << "Цифра некорректна: " << x[i] << endl;
            return 0;
        }

        n += d;

    }

    cout << "Число в 10-чной системе счисления: " << n;
    return 0;
}
