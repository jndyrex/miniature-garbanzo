#include <iostream>

int main() {

  double tempf;
  double tempc;

  std::cout << "temprature (fahrenheit): ";
  std::cin >> tempf;

  tempc = (tempf - 32) / 1.8;
  std::cout << "the temprature is " << tempc << "° celsius." << "\n";

}