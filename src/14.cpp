#include <iostream>
#include <cmath>

int main() {
  // Define variables
  int x = 0;
  float y = 0.0f;

  // Ask user for input
  std::cout << "Enter a number: ";
  std::cin >> x;

  // Calculate square root of the number
  y = sqrt(x);

  // Display result
  std::cout << "The square root of " << x << " is " << y << std::endl;

  return 0;
}
