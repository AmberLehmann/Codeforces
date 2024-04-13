#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  int tests = 0;
  string output = "";
  cin >> tests;
  for (int i = 0; i < tests; i++) {
    int n = 0;
    cin >> n;
    int c = 0;
    cin >> c;
    int d = 0;
    cin >> d;
    int rand_arr[n*n];
    for(int j = 0; j < n*n; j++) {
      int num = 0;
      cin >> num;
      rand_arr[j] = num;
    }
    sort(rand_arr, rand_arr + n*n);
    int square_arr[n][n];
    square_arr[0][0] = rand_arr[0];
    for(int k = 0; k < n - 1; k++) {
      for (int j = 0; j < n - 1; j++) {
        square_arr[j+1][k] = square_arr[k][j] + d;
        cout << "k: " << k << " j: " << j << " arr[k][j]: "<<square_arr[k][j];
      }
      square_arr[0][k+1] = square_arr[0][k] + c;
    }
    int one_d[n*n];
    int idx_one = 0;
    for(int j = 0; j < n; j++) {
      for(int k = 0; k < n;  k++) {
        one_d[idx_one] = square_arr[j][k];
        idx_one++;
      }
    }

    sort(one_d, one_d + n*n);
    for (int j = 0; j < n*n; j++) {
      if(one_d[j] != rand_arr[j]) {
        output+="NO";
        if (i != tests - 1) output+= "\n";
        break;
      }
      if (j == (n*n -1)) {
        output+= "YES";
        if (i != tests - 1) output+= "\n";
      }
    }
  }
  cout << output; 
  return 0;
}
