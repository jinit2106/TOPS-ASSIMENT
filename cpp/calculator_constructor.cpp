#include <iostream>
using namespace std;

class Calculator {
private:
    double result;

public:
    // Constructor
    Calculator() {
        result = 0.0;
    }

    // Addition
    Calculator(double num1, double num2) {
        result = num1 + num2;
    }

    // Subtraction
    Calculator(int num1, int num2) {
        result = num1 - num2;
    }

    // Division
    Calculator(float num1, float num2) {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            cout << "Error: Division by zero is undefined." << endl;
            result = 0.0;
        }
    }

    // Multiplication
    Calculator(int num1, double num2) {
        result = num1 * num2;
    }

    // Function to display the result
    void displayResult() {
        cout << "Result: " << result <<endl;
    }
};

int main() {
    Calculator calcAdd(5.5, 2.5);
    calcAdd.displayResult();

    Calculator calcSub(10, 4);
    calcSub.displayResult();

    Calculator calcDiv(12.6, 3.0);
    calcDiv.displayResult();

    Calculator calcMul(6, 3.5);
    calcMul.displayResult();

    return 0;
}
