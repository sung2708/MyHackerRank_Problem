#include <bits/stdc++.h>

using namespace std;

int findMedian(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    return arr[(arr.size() - 1) / 2];
}

int main(){

    return 0;
}