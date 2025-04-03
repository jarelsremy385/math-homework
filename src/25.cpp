#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > 0) {
        if (num2 > 0) {
            if (num1 == num2)
                cout << "Both are positive and equal." << endl;
            else
                cout << "Positive number is greater than the negative." << endl;
        }
        else if (num2 < 0)
            cout << "One of the numbers is negative." << endl;
    }
    else {
        if (num1 == 0) 
            cout << "The first number is zero." << endl;
        else
            cout << "Both are not positive or equal." << endl;
    }

    return 0;
}
