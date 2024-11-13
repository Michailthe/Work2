#include <iostream>

int main() {
  for (int a = 1; a <= 10; a++) {
    for (int b = 1; b <= 10; b++) {
      std::cout << a*b << "\t";
    }
    std::cout << "\n";
  }
}