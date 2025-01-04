#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr) {

  sort(arr.begin(), arr.end());

  long maxSum = 0;
  long minSum = 0;

  for (int i = 1; i < 4; i++) {
    maxSum += arr[i];
    minSum += arr[i];
  }
  cout << minSum + arr[0] << " " << maxSum + arr[4];
}

int main() { return 0; }
