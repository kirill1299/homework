#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    double d = b*b - 4*a*c;
    if(d < 0)
        cout << "Коренів немає";
    else if(d == 0)
        cout << "x = " << -b / (2*a);
    else {
        cout << "x1 = " << (-b + sqrt(d)) / (2*a) << endl;
        cout << "x2 = " << (-b - sqrt(d)) / (2*a);
    }
    return 0;
}
