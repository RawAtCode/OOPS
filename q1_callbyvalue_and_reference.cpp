#include <iostream>
using namespace std;

void swapByReference(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void swapByValue(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int num1, num2, choice;

    cout << "Program to implement Call by Value and Call by Reference in C++" << endl;
    cout << "1. Swap using call by value" << endl;
    cout << "2. Swap using call by reference\n" << endl;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Before:\nNum1: " << num1 << "\nNum2: " << num2 << endl;
        swapByValue(num1, num2);
        cout << "After:\nNum1: " << num1 << "\nNum2: " << num2 << endl;
    } else {
        cout << "Before:\nNum1: " << num1 << "\nNum2: " << num2 << endl;
        swapByReference(num1, num2);
        cout << "After:\nNum1: " << num1 << "\nNum2: " << num2 << endl;
    }

    return 0;
}
