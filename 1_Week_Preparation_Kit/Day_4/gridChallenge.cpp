#include <bits/stdc++.h>

using namespace std;

string gridChallenge(vector<string> grid)
{
    int n = grid.size();
    int m = grid[0].size();

    for (int i = 0; i < n; i++)
    {
        sort(grid[i].begin(), grid[i].end());
    }

    for (int i = 0; i < n;i++){
        for (int j = 1; j < m;j++){
            if(grid[j][i]<grid[j-1][i]){
                return "NO";
            }
        }
    }
    return "YES";
}

int main()
{

    return 0;
}