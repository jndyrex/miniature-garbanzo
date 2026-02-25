#include <iostream>

int main() {
    int numbers;

    std::cout << "numbers: ";
    std::cin >> numbers;

    int num1 = numbers / 100;
    int num2 = (numbers / 10) % 10;
    int num3 = numbers % 10;

    std::cout << num1 << " " << num2 << " " << num3;

    return 0;
}