#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr)
{
    int n = arr.size();
    long maxSum = 0;
    long minSum = 0;

    sort(arr.begin(), arr.end());

    for (int i = 1; i < n - 1; i++)
    {
        maxSum += arr[i];
        minSum += arr[i];
    }

    cout << minSum + arr[0] << " " << maxSum + arr[n - 1];
}

int main()
{

    return 0;
}