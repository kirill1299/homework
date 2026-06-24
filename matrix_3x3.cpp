// matrix_3x3.cpp
#include <iostream>

using namespace std;

int main() {
    int matrix[3][3];

    cout << "Введіть елементи матриці 3x3:" << endl;

    // Ввід матриці
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nМатриця 3x3:" << endl;

    // Вивід матриці
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
