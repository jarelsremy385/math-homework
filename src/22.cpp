#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 > 0 && num2 > 0) {
        cout << "The numbers are positive." << endl;
    } else if (num1 == 0 && num2 == 0) {
        cout << "Both numbers are zero." << endl;
    } else {
        cout << "The numbers are not positive or zero." << endl;
    }
    return 0;
}
