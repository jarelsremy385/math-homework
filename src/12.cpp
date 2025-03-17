
// This program generates a random number between 1 and 100
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    srand(time(NULL)); // seed the random number generator with current time
    int randomNumber = rand() % 100 + 1; // generate a random number between 1 and 100
    cout << "The random number is: " << randomNumber << endl;
    return 0;
}