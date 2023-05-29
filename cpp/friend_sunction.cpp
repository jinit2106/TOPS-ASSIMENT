#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int num) {
        value = num;
    }

    int getValue() const {
        return value;
    }

    friend int findMax(const Number& num1, const Number& num2);
};

int findMax(const Number& num1, const Number& num2) {
    return (num1.value > num2.value) ? num1.value : num2.value;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Number n1(num1);
    Number n2(num2);

    int maxNum = findMax(n1, n2);

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}
