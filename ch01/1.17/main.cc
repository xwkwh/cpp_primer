#include <iostream>

int main(int argc, char *argv[]) {
  int currentVal = 0, val = 0;

  if (std::cin >> currentVal) {
    int cnt = 1;
    while (std::cin >> val) {
      if (val == currentVal) {
        ++cnt;
      } else {
        std::cout << currentVal << " occurs " << cnt << " times " << std::endl;
        currentVal = val;
        val = 1;
      }
    }
    std::cout << currentVal << " occurs " << cnt << " times " << std::endl;
  }

  return 0;
}