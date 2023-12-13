#include <iostream>
using namespace std;

float simpleInterest(float principal, float time, float rate = 10) {
    return (principal * time * rate) / 100.0;
}

int main() {
    float principal, time, rate, interest;
    
    cout << "Program to calculate Simple Interest" << endl;
    cout << "Enter Principal Amount: ";
    cin >> principal;
    
    cout << "Enter Time (in years): ";
    cin >> time;
    
    char choice;
    cout << "Do you want to enter a custom rate? (y/n): ";
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y') {
        cout << "Enter Rate of Interest: ";
        cin >> rate;
        interest = simpleInterest(principal, time, rate);
    } else {
        interest = simpleInterest(principal, time);
    }
    
    cout << "Simple Interest: " << interest << endl;
    
    return 0;
}
