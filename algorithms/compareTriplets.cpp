#include <bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
  vector<int> point = {0, 0};
  for (int i = 0; i < a.size(); i++) {
    if (a[i] > b[i]) {
      point[0]++;
    } else if (a[i] < b[i]) {
      point[1]++;
    } else {
      continue;
    }
  }
  return point;
}


int main(){

    return 0;
}
