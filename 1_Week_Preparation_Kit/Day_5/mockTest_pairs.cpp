#include <bits/stdc++.h>

using namespace std;

int pairs(int k, vector<int> arr)
{
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (m.find(arr[i] + k) != m.end())
        {
            count++;
        }
    }
    return count;
}

int main(){

    return 0;
}