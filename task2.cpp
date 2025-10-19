#include
using namespace std;

int main() {
int number;
cout << "Введіть число: ";
cin >> number;


if (number > 0)
    cout << "Число додатнє" << endl;
else if (number < 0)
    cout << "Число від’ємне" << endl;
else
    cout << "Число дорівнює нулю" << endl;

return 0;


}
