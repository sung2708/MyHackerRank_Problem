#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
  int sum_1 = 0;
  int sum_2 = 0;

  for (int i = 0; i < arr.size(); i++) {
    sum_1 += arr[i][i];
    sum_2 += arr[i][arr.size() - i - 1];
  }
  return abs(sum_1 - sum_2);
}

int main(){

    return 0;
}
