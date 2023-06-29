#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    if (num < 10) {
        return num;
    }
    return num % 10 + sumOfDigits(num / 10);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = sumOfDigits(number);
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
