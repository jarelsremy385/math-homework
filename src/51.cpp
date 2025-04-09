#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    if (a > b) {
        swap(a, b);
    }
    
    cout << a << " + " << b << " = " << a + b;
    
    return 0;
}
