#include <iostream>
#include <Windows.h>
using namespace std;
int factorial( int n) {
    int result = 1;
    for ( int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
     int number;
    cout << "Введіть число: ";
    cin >> number;

    int result = factorial(number);
    cout << "Факторіал числа " << number << " дорівнює " << result << endl;

    return 0;
}



