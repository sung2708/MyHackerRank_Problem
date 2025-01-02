#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    int sum_1 = 0;
    int sum_2 = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        sum_1 += arr[i][i];
        sum_2 += arr[i][n - i - 1];
    }
    return abs(sum_1 - sum_2);
}

int main(){

    return 0;
}