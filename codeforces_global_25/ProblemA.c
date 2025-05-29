#include <iostream>

int main() {
  int tests = 0;
  int lamps = 0;
  std::string binary_str = "";
  std::cin >> tests;
  int lamp_arr[tests];
  std::string str_arr[tests];

  for(int i = 0; i < tests; i++) {
    std::cin >> lamps;
    lamp_arr[i] = lamps;
    std::cin >> binary_str;
    str_arr[i] = binary_str;
  }
  
  for (int j = 0; j < tests; j++){
    int count = 0;
    for(int i = 0; i < str_arr[j].length(); i++) {
      if(str_arr[j].at(i) == '1') {
        count++;
      }
    }
    if(count % 2 == 1 || str_arr[j].length() != lamp_arr[j]) {
      std::cout << "NO\n";
    }
    else {
      std::cout << "YES\n";
    }
  }
  return 0;
}
