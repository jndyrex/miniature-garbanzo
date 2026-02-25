#include <iostream>

int main() {
    int side;

    std::cout << "side: ";
    std::cin >> side;

    int perimeter = 4 * side;
    int area = side * side;

    std::cout << "perimeter: " << perimeter << "\n";
    std::cout << "area: " << area << "\n";

    return 0;
}