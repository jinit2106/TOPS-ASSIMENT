#include <iostream>
using namespace std;
// Addition function with two integer parameters
int mathOperation(int num1, int num2) {
    return num1 + num2;
}

// Addition function with two float parameters
float mathOperation(float num1, float num2) {
    return num1 + num2;
}

// Subtraction function with two integer parameters
int mathOperation(int num1, int num2) {
    return num1 - num2;
}

// Subtraction function with two float parameters
float mathOperation(float num1, float num2) {
    return num1 - num2;
}

// Multiplication function with two integer parameters
int mathOperation(int num1, int num2) {
    return num1 * num2;
}

// Multiplication function with two float parameters
float mathOperation(float num1, float num2) {
    return num1 * num2;
}

// Division function with two integer parameters
float Operation(int num1, int num2) {
    if (num2 != 0) {
        return static_cast<float>(num1) / num2;
    } else {
        cout << "Error: Division by zero is undefined." <<endl;
        return 0.0;
    }
}

// Division function with two float parameters
float mathOperation(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero is undefined." <<endl;
        return 0.0;
    }
}

int main() {
    int num1 = 10;
    int num2 = 5;
    float num3 = 3.5;
    float num4 = 2.5;

    int result1 = mathOperation(num1, num2);
    float result2 = mathOperation(num3, num4);

    cout << "Result of integer addition: " << result1 <<endl;
    cout << "Result of float addition: " << result2 << endl;

    return 0;
}
