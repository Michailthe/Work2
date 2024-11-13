#include <iostream>

int main() {
  for (int row = 0; row <= 10; row++) {
    for (int col = 0; col <= 30; col++) {
      if (row % 2 == 0)
        std::cout << "/";
          else
      std::cout  << "\\";
    }
    std::cout << "\n";
  }
}