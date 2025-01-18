githu


#include <iostream>
#include <locale.h>
#include <fstream>
using namespace std;

// Задача #10 "Игрушечный лабиринт"

int main() {

    setlocale(LC_ALL, "Russian");

    ifstream fcin("data.txt");
    // проверяем, существует ли файл
    if (!fcin.is_open())
    {
        cout << "File not created";
        return -1;
    }

    int n, m;
    // читаем числа N и M
    fcin >> n >> m;

    if (n > 100 || m > 100)
    {
        cout << "Числа N и M не должны превашть 100;";
        return -1;
    }

    // создаем динамический массив
    int** matrix = new int* [n];

    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];
    // заполняем его значениями из файла data.txt
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            fcin >> matrix[i][j];
        
    }
    // выводим правила
    cout << "Шарик находится в левом верхнем углу." << endl;

    cout << "Rules: " << endl;
    cout << "0 - свободная ячейка" << endl;
    cout << "1 - препятствие" << endl;
    cout << "2 - отверстие" << endl << endl;

    // выводим сам лабиринт
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    // как найти минимальный путь?
    // Не смог решить эту задачу. 
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!matrix[i + 1][j]) 
            {
                continue;
            }
            else if (!matrix[i][j + 1]) 
            {
                continue;
            }

            if (matrix[i][j + 1] || matrix[i + 1][j])
            {
                break;
            }
        }
        count++;
    }

    cout << "Минимальных наклонов необходимо: ";

    cout << count << endl;

    // неверный блок кода закончился 

    // удаляем массив (очищаем его из динамической памяти)
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}