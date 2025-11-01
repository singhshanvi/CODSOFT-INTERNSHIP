#include <iostream>
using namespace std;

int main() {
    double num1, num2;  // to store numbers
    char operation;     // to store operator

    // Asking user to input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Asking user to choose an operation
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    // Performing calculation based on operator
    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;

        case '-':
            cout << "Result: " << num1 - num2;
            break;

        case '*':
            cout << "Result: " << num1 * num2;
            break;

        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;

        default:
            cout << "Invalid operation!";
    }

    return 0;
}
