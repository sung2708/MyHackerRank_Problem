#include <bits/stdc++.h>

using namespace std;

int hanoi(vector<int> posts)
{
    if (posts.size() == 0)
    {
        return 0;
    }
    int cnt = 0;
    for (int i = 0; i < posts.size(); i++)
    {
        if (posts[i] == 1)
        {
            cnt++;
        }
    }
    return cnt;
}

int main(){

    return 0;
}