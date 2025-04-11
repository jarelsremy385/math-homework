#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 > 0 && num2 == 0) {
        cout << "The numbers are positive and the second one is zero." << endl;
    } else if (num1 < 0 || num2 > 0) {
        cout << "The numbers are negative or one of them is greater than zero." << endl;
    } else {
        int average = (num1 + num2) / 2.0f;
        if (average % 1 == 0) {
            cout << "The average of the two numbers is an integer." << endl;
        } else {
            cout << "The average of the two numbers is not an integer." << endl;
        }
    }

    return 0;
}
