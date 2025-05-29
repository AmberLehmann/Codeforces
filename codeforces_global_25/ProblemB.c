#include <iostream>
#include <cmath>
using namespace std;

int playMatches(int cow_arr[], int cow_idx, int matches) {
  int score = 0;
  for (int i = 0; i < matches - 1; i++) {
    if (cow_arr[i] > cow_arr[i+1]) {
      if(cow_arr[i] == cow_arr[cow_idx]) {
       score++;
      }
      int temp = cow_arr[i];
      cow_arr[i] = cow_arr[i+1];
      cow_arr[i+1] = temp;
      i++;
      continue;
    }
    else if (cow_arr[i+1] == cow_arr[cow_idx]){
      score++;
    }
    i++;

  }

  return score;
}

int main() {
  string output = "";
  int tests = 0;
  cin >> tests;
  for(int j = 0; j < tests; j++) {
    int num_cows = 0;
    int cow_idx = 0;
    cin >> num_cows;
    int cow_arr[num_cows];
    cin >> cow_idx;
    cow_idx--;
    int rating = 0;
    for(int i = 0; i < num_cows; i++) {
      cin >> rating;
      cow_arr[i] = rating;
    }
    
    int matches = num_cows - 1;
    int current = playMatches(cow_arr, cow_idx, matches);
    cout << "current : " << current << endl; 
    int highest = -1;
    if (current == 2) {
      output += "2\n";
      continue;
    }
        
    for(int i = 0; i < matches; i++) {
      if(i == cow_idx) continue;
      int temp = cow_arr[cow_idx];
      cow_arr[cow_idx] = cow_arr[i];
      cow_arr[i] = temp;
      int score_swap = playMatches(cow_arr, i, matches);
      if (score_swap > current) {
        highest = score_swap;
      }
      cow_arr[i] = cow_arr[cow_idx];
      cow_arr[cow_idx] = temp;

    }
    cout << "current : " << current << endl;
    cout << "highest : " << highest << endl;
    if (highest > current) {
      output += to_string(highest) + "\n";
    }
    else {
      output += to_string(current) + "\n";
    }

  }
  cout << output << endl;
  return 0;
}
