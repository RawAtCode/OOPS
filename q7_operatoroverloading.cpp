#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    void display() const {
        cout << real << " + " << imaginary << "i";
    }

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    friend Complex operator-(const Complex& c1, const Complex& c2);

    double getReal() const {
        return real;
    }

    double getImaginary() const {
        return imaginary;
    }
};

Complex operator-(const Complex& c1, const Complex& c2) {
    return Complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
}

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    Complex sum1 = num1 + num2;
    cout << "Sum using member function: ";
    sum1.display();
    cout << std::endl;

    Complex diff = num1 - num2;
    cout << "Difference using friend function: ";
    diff.display();
    cout << std::endl;

    return 0;
}
