#include <bits/stdc++.h>

using namespace std;

int truckTour(vector<vector<int>> petrolpumps)
{
    int n = petrolpumps.size();
    int start = 0;
    int petrol = 0;
    int distance = 0;
    for (int i = 0; i < n; i++)
    {
        petrol += petrolpumps[i][0] - petrolpumps[i][1];
        if (petrol < 0)
        {
            distance += petrol;
            petrol = 0;
            start = i + 1;
        }
    }
    return distance + petrol >= 0 ? start : -1;
}

int main()
{

    return 0;
}