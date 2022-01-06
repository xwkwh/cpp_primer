#include <iostream>

int main() {
  // 1.9
  int sum = 0;
  for (int i = 50; i <= 100; ++i)
    sum += i;
  std::cout << "1.9 for " << sum << std::endl;

  // 1.10
  for (int i = 10; i >= 0; --i)
    std::cout << "1.10 fro " << i << std::endl;

  // 1.11
  std::cout << "input two numbers: " << std::endl;
  int begin, end = 0;
  std::cin >> begin >> end;

  for (int i = begin; i <= end; ++i)
    std::cout << i << std::endl;

  return 0;
}