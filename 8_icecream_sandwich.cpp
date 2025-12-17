#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введіть рядок: ";
    cin >> s;

    if(s.length() < 3) {
        cout << "Ні";
        return 0;
    }

    char edge = s[0];
    int i = 0, j = s.length() - 1;

    while(i < s.length() && s[i] == edge) i++;
    while(j >= 0 && s[j] == edge) j--;

    if(i > j) {
        cout << "Ні";
        return 0;
    }

    char mid = s[i];
    for(int k = i; k <= j; k++) {
        if(s[k] != mid) {
            cout << "Ні";
            return 0;
        }
    }

    if(i == s.length() - j - 1)
        cout << "Так";
    else
        cout << "Ні";

    return 0;
}
