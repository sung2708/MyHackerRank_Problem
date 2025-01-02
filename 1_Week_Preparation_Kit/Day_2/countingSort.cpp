#include <bits/stdc++.h>

using namespace std;

vector<int> countingSort(vector<int> arr)
{
    vector<int> sol(100, 0);

    for (int i = 0; i <= arr.size() - 1; i++)
    {
        sol[arr[i]]++;
    }
    return sol;
}

int main()
{

    return 0;
}