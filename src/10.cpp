#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    int randomNumber = rand() % 10 + 1;
    std::cout << "The random number is: " << randomNumber << std::endl;
    return 0;
}
