#include <iostream>

int main() {
  int sum = 0, val = 0;
  std::cout << "input number:" << std::endl;
  while (std::cin >> val) {
    std::cout << "val: " << val << std::endl;
    sum += val;
  }
  std::cout << "sum : " << sum << std::endl;
  return 0;
}
