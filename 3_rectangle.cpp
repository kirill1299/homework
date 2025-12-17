#include <iostream>
using namespace std;

int main() {
    int w, h;
    cout << "Ширина: ";
    cin >> w;
    cout << "Висота: ";
    cin >> h;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
