#include <iostream>
using namespace std;

int main() {
    double price;
    cout << "Сума покупки: ";
    cin >> price;

    double discount = 0;
    if(price > 1000) discount = 0.05;
    else if(price > 500) discount = 0.03;

    cout << "До сплати: " << price * (1 - discount);
    return 0;
}
