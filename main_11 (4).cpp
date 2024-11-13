#include <iostream>

int main() {
  std::cout << "Какого размера ваше письмо?";
  int startSize;
  std::cin >> startSize;

  int timesFolded = 0;
  for (int size = startSize; size > 12; size /= 2) {
    timesFolded += 2;
  }
  std::cout << "Ваkм нужно сложить письмо" << timesFolded << "раз.";
}