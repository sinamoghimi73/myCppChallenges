//
//  main.cpp
//  S1N4M

#include <iostream>
#include <vector>

int binaryExpansion(const long &number) {
  int iteration{};
  while (number >= (1 << iteration)) ++iteration;

  return iteration;
}

int fastModularExponentiation(const int &base, const int &power,
                              const int &modulo) {
  int x{1};
  int n{binaryExpansion(power)};
  int p{base % modulo};

  int mask{1};
  for (int i{}; i < n; ++i) {
    if (power & mask) x = (x * p) % modulo;
    p = (p * p) % modulo;
    mask <<= 1;
  }

  return x;
}

int main() {
  std::cout << "Enter a, b, c as a^b mod c : ";

  int a{}, b{}, c{};
  std::cin >> a >> b >> c;
  std::cout << fastModularExponentiation(a, b, c) << std::endl;

  return 0;
}
