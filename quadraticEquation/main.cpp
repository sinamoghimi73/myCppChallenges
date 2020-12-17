//
//  main.cpp
//  S1N4M

#include <iostream>
#include <vector>
#include <string>

std::vector<double> quadraticEquation(int &a, int &b, int &c) {
    double sqrtDelta{sqrt(b*b - 4*a*c)};
    std::vector<double> rootList{};
    if((b*b - 4*a*c) >= 0){
        rootList.push_back((-b + sqrtDelta)/(2*a));
        rootList.push_back((-b - sqrtDelta)/(2*a));
    }
    return rootList;
}


int main() {
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;
    
    std::vector<double> rootList{quadraticEquation(a, b, c)};
    std::cout << ((rootList.size() > 0)? ("("+std::to_string(rootList.at(0))+", "+std::to_string(rootList.at(1))+")\n"):("No Roots Exist\n"));
  return 0;
}
