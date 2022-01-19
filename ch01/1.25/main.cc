// 0-201-70353-X 4 24.99
// 0-201-82470-1 4 45.39
// 0-201-88954-4 2 15.00
// 0-201-88954-4 5 12.00
// 0-201-88954-4 7 12.00
// 0-201-88954-4 2 12.00
// 0-399-82477-1 2 45.39
// 0-399-82477-1 3 45.39
// 0-201-78345-X 3 20.00
// 0-201-78345-X 2 25.00

#include <iostream>

#include "../Sales_item.h"

int main() {
  Sales_item total;

  if (std::cin >> total) {
    Sales_item trans;

    while (std::cin >> trans) {
      if (trans.isbn() == total.isbn()) {
        total += trans;
      } else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  }

  return 0;
}
