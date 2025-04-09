#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n * n << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            if (i % 2 != 0 && i > n / 2) {
                break;
            }
        }
        cout << i * i - 1 << endl;
    }
}
