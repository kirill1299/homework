#include <iostream>
using namespace std;

int main() {
    int h, w;
    cout << "Висота: ";
    cin >> h;
    cout << "Ширина: ";
    cin >> w;

    int a[50][50];
    int num = 1, top = 0, bottom = h-1, left = 0, right = w-1;

    while(top <= bottom && left <= right) {
        for(int i = left; i <= right; i++) a[top][i] = num++;
        top++;

        for(int i = top; i <= bottom; i++) a[i][right] = num++;
        right--;

        for(int i = right; i >= left; i--) a[bottom][i] = num++;
        bottom--;

        for(int i = bottom; i >= top; i--) a[i][left] = num++;
        left++;
    }

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
