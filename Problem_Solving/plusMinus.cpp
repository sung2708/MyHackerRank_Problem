#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
  int pos = 0;
  int neg = 0;
  int ze = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > 0) {
      pos++;
    } else if (arr[i] < 0) {
      neg++;
    } else {
      ze++;
    }
  }
  cout << 1.0 * pos / arr.size() << endl;
  cout << 1.0 * neg / arr.size() << endl;
  cout << 1.0 * ze / arr.size();
}

int main() { return 0; }
