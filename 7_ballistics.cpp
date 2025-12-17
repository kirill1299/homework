#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double v, angle;
    const double g = 9.81;

    cout << "Швидкість v: ";
    cin >> v;
    cout << "Кут (градуси): ";
    cin >> angle;

    double rad = angle * M_PI / 180.0;
    double distance = (v*v * sin(2*rad)) / g;

    cout << "Дальність польоту: " << distance;
    return 0;
}
