//
//  main.cpp
//  S1N4M

#include <iostream>

int cars(int &wheels, int &bodies, int &figures) {
  short count{};
  while ((wheels >= 4) && (bodies >= 1) && (figures >= 2)) {
    ++count;
    wheels -= 4;
    --bodies;
    figures -= 2;
  }

  return count;
}

int main() {
  int wheels{}, bodies{}, figures{};
  std::cin >> wheels >> bodies >> figures;

  std::cout << cars(wheels, bodies, figures) << std::endl;
  return 0;
}
