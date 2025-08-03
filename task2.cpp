#include <iostream>
using namespace std;

int main() {
    double number1, number2;
    char operation;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    
    switch (operation) {
        case '+':
            cout << "Result: " << number1 + number2 << endl;
            break;
        case '-':
            cout << "Result: " << number1 - number2 << endl;
            break;
        case '*':
            cout << "Result: " << number1 * number2 << endl;
            break;
        case '/':
            if (number2 != 0)
                cout << "Result: " << number1 / number2 << endl;
            else
                cout << "Error: Division by zero is not allowed" << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
    }

    return 0;
}
