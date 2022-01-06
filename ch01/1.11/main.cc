#include <iostream>

int main() {
  std::cout << "input two numbers: " << std::endl;
  int begin, end = 0;
  std::cin >> begin >> end;

  while (begin <= end) {
    std::cout << begin << std::endl;
    ++begin;
  }

  return 0;
}
