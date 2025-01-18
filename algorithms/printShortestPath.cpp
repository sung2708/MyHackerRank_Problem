#include <bits/stdc++.h>

using namespace  std;

void printShortestPath(int n, int i_start, int j_start, int i_end, int j_end)
{
    // Define possible moves and their corresponding coordinates
    vector<string> moves = {"UL", "UR", "R", "LR", "LL", "L"};
    vector<int> dx = {-2, -2, 0, 2, 2, 0};
    vector<int> dy = {-1, 1, 2, 1, -1, -2};

    // Initialize distance and parent tracking
    vector<vector<int>> dist(n, vector<int>(n, -1));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(n, {-1, -1}));

    // Start BFS
    queue<pair<int, int>> q;
    q.push({i_start, j_start});
    dist[i_start][j_start] = 0;

    while (!q.empty())
    {
        auto [i, j] = q.front();
        q.pop();

        for (int k = 0; k < 6; k++)
        {
            int ni = i + dx[k];
            int nj = j + dy[k];

            // Check bounds and unvisited cells
            if (ni >= 0 && ni < n && nj >= 0 && nj < n && dist[ni][nj] == -1)
            {
                dist[ni][nj] = dist[i][j] + 1;
                parent[ni][nj] = {i, j}; // Record the parent
                q.push({ni, nj});
            }
        }
    }

    // Check if the destination is unreachable
    if (dist[i_end][j_end] == -1)
    {
        cout << "Impossible" << '\n';
        return;
    }

    // Output the distance
    cout << dist[i_end][j_end] << '\n';

    // Reconstruct the path
    vector<string> path;
    pair<int, int> current = {i_end, j_end};

    while (current != make_pair(i_start, j_start))
    {
        pair<int, int> prev = parent[current.first][current.second];

        // Find the move that leads to the current position
        for (int k = 0; k < 6; k++)
        {
            if (prev.first + dx[k] == current.first && prev.second + dy[k] == current.second)
            {
                path.push_back(moves[k]);
                break;
            }
        }
        current = prev; // Move to the previous position
    }

    // Reverse the path to get the correct order
    reverse(path.begin(), path.end());

    // Print the moves
    for (const string &move : path)
    {
        cout << move << ' ';
    }
    cout << '\n';
}

int main(){

    return 0;
}
