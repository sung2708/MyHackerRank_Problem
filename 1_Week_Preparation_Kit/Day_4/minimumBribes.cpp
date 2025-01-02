#include <bits/stdc++.h>

using namespace std;

void minimumBribes(vector<int> q)
{
    int cnt = 0;
    for (int i = 0; i < q.size(); i++)
    {
        if (q[i] - i - 1 > 2)
        {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = i - 1; j >= q[i] - 2; j--)
        {
            if (q[j] > q[i])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}

int main()
{

    return 0;
}