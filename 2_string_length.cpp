#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Введіть рядок: ";
    getline(cin, s);
    cout << "Довжина рядка: " << s.length();
    return 0;
}
