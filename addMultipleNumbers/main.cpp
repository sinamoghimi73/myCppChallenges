//
//  main.cpp
//  S1N4M
//
//  Created by Sina Moghimi on 11/26/20.
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

double addMultipleNumbers(std::string &input) {
  std::string token{};
  std::vector<std::string> numberList{};

  std::istringstream linestream(input);
  while (std::getline(linestream, token, ' ')) numberList.push_back(token);

  double sum{};
  for (std::string &number : numberList) sum += std::stod(number);

  return sum;
}

int main() {
  std::string input{};
  std::getline(std::cin, input);

  std::cout << addMultipleNumbers(input) << std::endl;
  return 0;
}
