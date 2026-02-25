#include <iostream>

int main() {
    
    int x;
    int y;
    
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;
    
    std::cout << "summation: " << x + y << "\n";
    std::cout << "subtraction: " << x - y << "\n";
    std::cout << "multiplication: " << x * y << "\n";
    std::cout << "division: " << x / y << "\n";
    
    return 0;
}