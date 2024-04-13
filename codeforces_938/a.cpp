#include <iostream>

int main () {
  int tests = 0;
  std::string output = "";
  std::cin >> tests;
  for(int i = 0; i < tests; i++) {
    int yogurts = 0;
    std::cin >> yogurts;
    int price_one = 0;
    std::cin >> price_one;
    int price_two = 0;
    std::cin >> price_two;
    int price = 0;
    
    if(price_two > (2 * price_one))
      price += yogurts * price_one;
    else if (yogurts % 2 == 0)
      price += yogurts/2 * price_two;
    else {
      price += price_one;
      yogurts--;
      price += yogurts/2 * price_two;
    }
    output += std::to_string(price) + "\n";
  }
  std::cout << output;
  return 0;
}
