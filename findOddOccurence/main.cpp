//
//  main.cpp
//  S1N4M

#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> findOddOccurence(const std::vector<int> &array) {
  std::unordered_map<int, int> unorderedMap{};
  for (const int &number : array) {
    if (unorderedMap.find(number) == unorderedMap.end())
      unorderedMap.insert(std::make_pair(number, 1));
    else
      unorderedMap[number] += 1;
  }

  std::vector<int> numberList{};
  for (std::pair<const int, int> &pair : unorderedMap)
    if (pair.second % 2 != 0) numberList.push_back(pair.first);

  return numberList;
}

int main() {
  std::vector<int> array{10, 10};
  std::vector<int> numberList{findOddOccurence(array)};

  if (numberList.size() == 0)
    std::cout << "No Odd Occurenece Happened!";
  else {
    for (const int &number : numberList) std::cout << number << " ";
    std::cout << std::endl;
  }

  return 0;
}
