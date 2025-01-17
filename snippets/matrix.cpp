#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian");

    const int N = 7;
    const int M = 4;

    double** matrix = new double*[M];

    ifstream in("in.txt");
    if (!in.is_open()) {
        cout << "Not created";
        return -1;
    }
    ofstream out("out.txt");
    if (!out.is_open()) {
        cout << "Not created";
        return -1;
    }

    for (int i = 0; i < M; i++)
        matrix[i] = new double[N];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            in >> matrix[i][j];

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < M; i++)
            out << matrix[i][j] << " ";
        out << endl;
    }

    for (int i = 0; i < M; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
