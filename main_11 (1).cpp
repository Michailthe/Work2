#include <iostream>

int main() {
  int n;
  std::cout << "Какое число по счету хотите узнать?";
  std::cin >> n;
  int counter = 0;

  int currentNumber;
  int previousNumber = 1, prevPreviousNumber;

  while (counter < n ) {
    if (counter < 2) {
      currentNumber = 1;
  } else {
    currentNumber = previousNumber + prevPreviousNumber;
  }
  std::cout << currentNumber << "";
  
  counter++;
    prevPreviousNumber = previousNumber;
      previousNumber = currentNumber;
  }
}