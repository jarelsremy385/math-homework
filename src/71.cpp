#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        for(int i = 1; i <= n / 2; ++i)
            if ((n - i) > 1 && isPrime(n - i))
                cout << n - i << " ";
    }
}
