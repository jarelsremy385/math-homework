#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 || i % 5 == 0)
                continue;
            cout << i << " ";
        }
        return 0;
    } else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0 || n % (i + 2) == 0)
                continue;
            cout << n << " ";
        }
        return 0;
    }
}
