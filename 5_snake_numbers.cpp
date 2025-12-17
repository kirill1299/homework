#include <iostream>
using namespace std;

int main() {
    int h, w;
    cout << "Висота: ";
    cin >> h;
    cout << "Ширина: ";
    cin >> w;

    int num = 1;
    for(int i = 0; i < h; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < w; j++)
                cout << num++ << " ";
        } else {
            int start = num + w - 1;
            for(int j = 0; j < w; j++)
                cout << start - j << " ";
            num += w;
        }
        cout << endl;
    }
    return 0;
}
