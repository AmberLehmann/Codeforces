#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int tests = 0;
  string output = "";
  cin >> tests;
  for (int i = 0; i < tests; i++) {
    int ships = 0;
    cin >> ships;
    int attacks = 0;
    cin >> attacks;
    int arr[ships];
    int count = 0;
    for (int j = 0; j < ships; j++) {
      int ship = 0;
      cin >> ship;
      arr[j] = ship;
    }

    for(int j = 0; j < attacks; j++) {
      if(j % 2 == 0) {
        for(int k = 0; ; k++) {
          if(arr[k] == 0) {
            continue;
          }
          else {
            arr[k] -= 1;
            if(arr[k] == 0) {
              count++;
            }
            break;
          }
        }
      }
      else {
        for(int k = ships - 1; ; k--) {
          if(arr[k] == 0) {
            continue;
          }
          else {
            arr[k] -=1;
            if(arr[k] == 0) count++;
            break;
          }
        }
      }
    }
    output += to_string(count);
    if(i != tests - 1) output += "\n";
  }
  cout << output;


  return 0;
}

