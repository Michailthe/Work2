#include <iostream>
int main() {
  int number;
  std::cout <<"Введите положительное число если все верно пинки прыгнет:\n";
  std::cin >> number;

  int current = 1;
  int count = 0;
  while ( current <=number) {
    if ( number % current == 0) count +=1;
    if (count == 2) break;
    current +=1;
  }
  
  if (current == number) {
    std::cout << "Прыгнула";
  } else {
    std::cout << "Не прыгнула";
  }
  
}