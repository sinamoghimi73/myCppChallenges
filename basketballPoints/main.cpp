//
//  main.cpp
//  S1N4M

#include <iostream>

int points(const int &twoPointers, const int &threePointers) {
    return twoPointers*2 + threePointers*3;
}


int main() {
    int twoPointers{}, threePointers{};
    std::cin >> twoPointers >> threePointers;
    std::cout << points(twoPointers, threePointers) << std::endl;
  return 0;
}
