//
//  main.cpp
//  S1N4M


#include <iostream>

template <typename typeA, typename typeB>
float addition(const typeA &a, const typeB &b) {
  return a + b;
}

int main() {
  float a{}, b{};
  std::cin >> a >> b;
  std::cout << addition(a, b) << "\n";
  return 0;
}
