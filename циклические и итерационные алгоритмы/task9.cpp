#include <iostream>
#include <cmath>

void main() {
    setlocale(LC_ALL, "ru");
    double e = 1.0E-477, s = 2, si = 0, t = 1, n = 1;
    while (abs(s - si) > e) {
        si = s; n++;
        t /= n; s += t;
    }

    int k = 1;
    s = 2; si = 0;

    while (abs(s - si) > e) {
        si = s; s = 0;
        for (int i = k; i >= 1; i--) {
            if (i % 2 == 0) s = 1.0 / (2 + s);
            else s = 1.0 / (i - s);
        }
        k++;
    }

    s += 1;

    if (k > n) 
        std::cout << "Вычисление числа M_E с помощью ряда быстрее на " << k - n << " итерацию" << std::endl;
    
    else if (n > k)
        std::cout << "Вычисление числа M_E с помощью бесконечной дроби быстрее на " << n - k << " итерацию" << std::endl;
   
    else
        std::cout << "Количество итераций в обоих методах одинаково" << std::endl;
   

}
