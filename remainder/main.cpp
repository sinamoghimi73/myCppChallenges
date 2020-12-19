//
//  main.cpp
//  S1N4M

#include <iostream>

int remainder(int &x, int &y) { return x % y; }

int main() {
  int x{}, y{};
  std::cin >> x >> y;
  std::cout << remainder(x, y) << std::endl;
  return 0;
}
