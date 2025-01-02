#include <bits/stdc++.h>

using namespace std;

int flippingMatrix(vector<vector<int>> matrix)
{
    int n = matrix.size() / 2;
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int maxValue = max({matrix[i][j], matrix[i][2 * n - j - 1], matrix[2 * n - i - 1][j], matrix[2 * n - i - 1][2 * n - j - 1]});
            maxSum += maxValue;
        }
    }
    return maxSum;
}

int main()
{

    return 0;
}