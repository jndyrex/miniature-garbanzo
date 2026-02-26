#include <iostream>

 // this program takes the weight from an item and calculates how much it would weigh on mars

int main() {

   double woe;
   
  std::cout << "weight (on earth): ";
  std::cin >> woe;
  
  std::cout << "weight (on mars): " << woe * 0.37857 << "\n";
  
  return 0;

}