#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>

int main() {
    unsigned long a;
    unsigned long b;
    
    std::cout << "Type variable a : ";
    std::cin >> a;
    std::cout << "Type variable b : ";
    std::cin >> b;

    long ret = std::gcd(a, b);
    
    std::cout << "Greatest Common Dividor is : " << ret << std::endl;
}