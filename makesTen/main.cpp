//
//  main.cpp
//  S1N4M

#include <iostream>

bool makesTen(const int &a, const int &b) {
  return (a == 10) || (b == 10) || (a + b == 10);
}

int main() {
  int a{}, b{};
  std::cin >> a >> b;
  std::cout << makesTen(a, b) << std::endl;
  return 0;
}
