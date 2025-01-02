#include <bits/stdc++.h>

using namespace std;

int lonelyinteger(vector<int> a)
{
    int s = 0;
    for (int i = 0; i < a.size(); i++)
    {
        s ^= a[i];
    }
    return s;
}

int main(){

    return 0;
}