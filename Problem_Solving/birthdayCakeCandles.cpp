#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> candles)
{
    unordered_map<int, int> m;
    for (int i = 0; i < candles.size(); i++)
    {
        m[candles[i]]++;
    }
    int cnt = 0;
    int maxHeight = 0;
    for (auto pair : m)
    {
        if (maxHeight < pair.first)
        {
            maxHeight = pair.first;
            cnt = pair.second;
        }
    }
    return cnt;
}

int main()
{
}