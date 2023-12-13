#include <cmath>
#include <iostream>
using namespace std;

int power(int m, int n) {
    return pow(m, n);
}

double power(double m, int n) {
    return pow(m, n);
}

int main() {
    int intBase, exponent;
    double doubleBase;

    cout << "Enter an integer base: ";
    cin >> intBase;

    cout << "Enter a double base: ";
    cin >> doubleBase;

    cout << "Enter an exponent: ";
    cin >> exponent;

    cout << "Power (integer base): " << power(intBase, exponent) << endl;
    cout << "Power (double base): " << power(doubleBase, exponent) << endl;

    return 0;
}
