#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 8, 1, 9, 3, 7};
    sort(numbers.begin(), numbers.end());

    cout << "Sorted Numbers: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    auto minElement = min_element(numbers.begin(), numbers.end());
    cout << "Minimum Element: " << *minElement << endl;

    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of Elements: " << sum << endl;

    vector<int> evenNumbers;
    copy_if(numbers.begin(), numbers.end(), back_inserter(evenNumbers), [](int x) { return x % 2 == 0; });

    cout << "Even Numbers: ";
    for (const auto& num : evenNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
