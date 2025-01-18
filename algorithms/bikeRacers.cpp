#include <bits/stdc++.h>

using namespace std;

long bikeRacers(vector<vector<int>> bikers, vector<vector<int>> bikes)
{
    int m = bikers.size();
    int n = bikes.size();

    // Initialize the bipartite graph
    vector<vector<int>> graph(m, vector<int>(n));

    // Calculate the distance between bikers and bikes (squared Euclidean distance)
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int dx = bikers[i][0] - bikes[j][0];
            int dy = bikers[i][1] - bikes[j][1];
            graph[i][j] = dx * dx + dy * dy;
        }
    }

    // Perform the Hungarian algorithm
    vector<int> assignment(n, -1);
    vector<int> labelX(m, 0);
    vector<int> labelY(n, 0);

    for (int i = 0; i < m; i++)
    {
        vector<int> slack(n, INT_MAX);
        vector<int> prev(n, -1);
        vector<bool> visited(n, false);

        int x = i;
        int y = -1;

        // Find an augmenting path
        while (y == -1)
        {
            visited[x] = true;
            int delta = INT_MAX;
            int next = -1;

            for (int j = 0; j < n; j++)
            {
                if (!visited[j])
                {
                    int diff = graph[x][j] - labelX[x] - labelY[j];
                    if (diff < slack[j])
                    {
                        slack[j] = diff;
                        prev[j] = x;
                    }

                    if (slack[j] < delta)
                    {
                        delta = slack[j];
                        next = j;
                    }
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (visited[j])
                {
                    labelX[assignment[j]] += delta;
                    labelY[j] -= delta;
                }
                else
                {
                    slack[j] -= delta;
                }
            }

            x = next;
            y = assignment[x];
        }

        // Update the matching after finding an augmenting path
        while (x != -1)
        {
            int temp = assignment[y];
            assignment[y] = x;
            x = prev[y];
            y = temp;
        }
    }

    // Calculate the total distance
    long totalDistance = 0;
    for (int j = 0; j < n; j++)
    {
        if (assignment[j] != -1)
        {
            totalDistance += graph[assignment[j]][j];
        }
    }

    return totalDistance;
}

int main(){

    return 0;
}