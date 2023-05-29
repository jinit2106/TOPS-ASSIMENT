#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cubic(int num) {
    return num * num * num;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int product = multiply(num1, num2);
    cout << "Product: " << product << endl;

    int num = 5;
    int result = cubic(num);
    cout << "Cubic value: " << result <<endl;

    return 0;
}
