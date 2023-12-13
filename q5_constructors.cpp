#include <iostream>
using namespace std;

class SampleClass {
private:
    int data;

public:
    SampleClass() {
        cout << "No-argument constructor called" << endl;
        data = 0;
    }

    SampleClass(int value) {
        cout << "One-argument constructor called" << endl;
        data = value;
    }

    SampleClass(int value1, int value2) {
        cout << "Two-argument constructor called" << endl;
        data = value1 + value2;
    }

    SampleClass(const SampleClass &other) {
        cout << "Copy constructor called" << endl;
        data = other.data;
    }

    SampleClass(int *array, int size) {
        cout << "Dynamic constructor called" << endl;
        data = 0;
        for (int i = 0; i < size; ++i) {
            data += array[i];
        }
    }

    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    SampleClass obj1;
    obj1.displayData();

    SampleClass obj2(42);
    obj2.displayData();

    SampleClass obj3(10, 20);
    obj3.displayData();

    SampleClass obj4(obj3);
    obj4.displayData();

    int dynamicArray[] = {1, 2, 3, 4, 5};
    SampleClass obj5(dynamicArray, 5);
    obj5.displayData();

    return 0;
}
