#include <iostream>

#include "../Sales_item.h"

int main() {
  Sales_item book;
  std::cout << "input any book " << std::endl;
  int cnt = 1;
  std::string isbn;

  if (std::cin >> book) {
    isbn = book.isbn();
    while (std::cin >> book) {
      if (book.isbn() == isbn) {
        cnt++;
      } else {
        std::cout << isbn << " has " << cnt << std::endl;
        isbn = book.isbn();
        cnt = 1;
      }
    }
    std::cout << isbn << " has " << cnt << std::endl;
  }

  return 0;
}