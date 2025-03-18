
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Welcome to Math Homework" << endl;
    int num1 = 0;
    int num2 = 0;
    char op = '+';
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Select an operator (+, -, *, /): ";
    cin >> op;
    switch (op) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 / num2 << endl;
            } else {
                cout << "Error: division by zero" << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }
    return 0;
}