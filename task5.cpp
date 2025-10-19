#include 
#include 
using namespace std;

bool isLucky(int number) {
int digits[6];
for (int i = 5; i >= 0; --i) {
digits[i] = number % 10;
number /= 10;
}
int leftSum = digits[0] + digits[1] + digits[2];
int rightSum = digits[3] + digits[4] + digits[5];
return leftSum == rightSum;
}

int main() {
cout << "Список щасливих квитків:\n";
for (int i = 0; i <= 999999; ++i) {
if (isLucky(i)) {
cout << setw(6) << setfill('0') << i << endl;
}
}
return 0;
}
