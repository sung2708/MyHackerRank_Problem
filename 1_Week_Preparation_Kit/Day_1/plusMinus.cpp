#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr)
{
    float pos = 0;
    float neg = 0;
    float ze = 0;

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            ze++;
        }
    }
    cout << pos / n << endl;
    cout << neg / n << endl;
    cout << ze / n << endl;
}

int main()
{
}