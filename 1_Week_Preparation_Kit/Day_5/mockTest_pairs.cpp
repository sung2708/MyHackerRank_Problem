#include <bits/stdc++.h>

using namespace std;

int pairs(int k, vector<int> arr) {
  unordered_map<int, int> m;
  int count = 0;
  for (int i = 0; i < arr.size(); i++) {
    m[arr[i]]++;
  }
  for (int i = 0; i < arr.size(); i++) {
    if (m.find(arr[i] + k) != m.end()) {
      count++;
    }
  }
  return count;
}

/*
other solution
int pairs(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int i = 0, j = 1, count = 0;

    while (j < arr.size()) {
        int diff = arr[j] - arr[i];
        if (diff == k) {
            count++;
            i++;
            j++;
        } else if (diff < k) {
            j++;
        } else {
            i++;
        }

        if (i == j) {
            j++;
        }
    }

    return count;
}
*/

int main() { return 0; }
