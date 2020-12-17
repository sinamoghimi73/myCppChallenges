//
//  main.cpp
//  S1N4M

#include <iostream>
#include <string>

int countWords(std::string &str) {
  int count{1};
  for (char &c : str)
    if (c == ' ') ++count;

  return count;
}

int main() {
  std::string str{};
  std::getline(std::cin, str);

  std::cout << countWords(str) << std::endl;

  return 0;
}
