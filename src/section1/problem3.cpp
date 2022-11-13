#include <iostream>
#include <numeric>

int main() {
    unsigned long a;
    unsigned long b;
    
    std::cout << "Type variable a :";
    std::cin >> a;
    std::cout << "Type variable b :";
    std::cin >> b;

    long lcm = std::lcm(a, b);

    std::cout << "Least Coomon Multiple is :" << lcm << std::endl;
}