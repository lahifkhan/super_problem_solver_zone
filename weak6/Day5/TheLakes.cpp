#include <bits/stdc++.h>
using namespace std;

#define ll long long

int dX[] = {0, 1, 0, -1}; 
int dY[] = {1, 0, -1, 0}; 

void DFS(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &visited, int &currSum) {
    int n = grid.size(), m = grid[0].size();
    visited[row][col] = 1;
    currSum += grid[row][col];

    for (int i = 0; i < 4; i++) {
        int newRow = row + dX[i];
        int newCol = col + dY[i];

        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && 
            grid[newRow][newCol] != 0 && !visited[newRow][newCol]) {
            DFS(newRow, newCol, grid, visited, currSum);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> grid(n, vector<int>(m));
        vector<vector<int>> visited(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        int maxVolume = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] > 0 && !visited[i][j]) {
                    int currSum = 0;
                    DFS(i, j, grid, visited, currSum);
                    maxVolume = max(maxVolume, currSum);
                }
            }
        }

        cout << maxVolume << "\n";
    }
    return 0;
}
