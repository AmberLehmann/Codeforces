#include "bits/stdc++.h"
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, a, b, c;
  cin >> n;
  int count = 0;
  for(int i = 0; i < n; i++) {
    cin >> a >> b >> c;
    int sum = a+b+c;
    if(sum >= 2) count++;
  }
  cout << count << endl;
  return 0;
}

