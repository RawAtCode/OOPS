#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber() : real(0.0), imaginary(0.0) {}

    void assignInitialValue(double realValue, double imaginaryValue) {
        real = realValue;
        imaginary = imaginaryValue;
    }

    void displayComplexNumber() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }

    void addRealNumber(double realNumber) {
        real += realNumber;
    }

    void subtractRealNumber(double realNumber) {
        real -= realNumber;
    }

    void addImaginaryNumber(double imaginaryNumber) {
        imaginary += imaginaryNumber;
    }

    void subtractImaginaryNumber(double imaginaryNumber) {
        imaginary -= imaginaryNumber;
    }
};

int main() {
    ComplexNumber complexNum;

    double initialReal, initialImaginary;
    cout << "Enter initial real part: ";
    cin >> initialReal;
    cout << "Enter initial imaginary part: ";
    cin >> initialImaginary;
    complexNum.assignInitialValue(initialReal, initialImaginary);

    complexNum.displayComplexNumber();

    double realToAdd, realToSubtract;
    cout << "Enter real number to add: ";
    cin >> realToAdd;
    complexNum.addRealNumber(realToAdd);

    cout << "Enter real number to subtract: ";
    cin >> realToSubtract;
    complexNum.subtractRealNumber(realToSubtract);

    complexNum.displayComplexNumber();

    double imaginaryToAdd, imaginaryToSubtract;
    cout << "Enter imaginary number to add: ";
    cin >> imaginaryToAdd;
    complexNum.addImaginaryNumber(imaginaryToAdd);

    cout << "Enter imaginary number to subtract: ";
    cin >> imaginaryToSubtract;
    complexNum.subtractImaginaryNumber(imaginaryToSubtract);

    complexNum.displayComplexNumber();

    return 0;
}
