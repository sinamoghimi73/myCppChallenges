//
//  main.cpp
//  S1N4M

#include <iostream>
#include <vector>

int fastModularExponentiation(const int &base, const int &power,
                              const int &modulo) {
  int x{1}, n(ceil(log2(power))), p{base % modulo}, mask{1};

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
