#include <iostream>

#include "../Sales_item.h"

int main() {
  Sales_item book1, book2;
  while (std::cin >> book1) {
    book2 += book1;
  }
  std::cout << book2 << std::endl;

  return 0;
}
