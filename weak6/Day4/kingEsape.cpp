#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1010;
int n;
int grid[MAX_N][MAX_N];
int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, -1, 1};

void dfs(int r, int c) {
    grid[r][c] = 2;
    for (int i = 0; i < 8; i++) {
        int x = dx[i] + r;
        int y = dy[i] + c;
        if (x > 0 && y > 0 && x <= n && y <= n && grid[x][y] == 0) {
            dfs(x, y);
        }
    }
}

int main() {
    int ax, ay, bx, by, cx, cy;
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
    
    memset(grid, 0, sizeof(grid));
    
    for (int i = 1; i <= n; i++) {
        grid[i][ay] = 1;
        grid[ax][i] = 1;
    }
    
    int i = ax, j = ay;
    while (i < n && j < n) {
        grid[i][j] = 1;
        i++; j++;
    }
    
    i = ax, j = ay;
    while (i > 0 && j < n) {
        grid[i][j] = 1;
        i--; j++;
    }
    
    i = ax, j = ay;
    while (i < n && j > 0) {
        grid[i][j] = 1;
        i++; j--;
    }
    
    i = ax, j = ay;
    while (i > 0 && j > 0) {
        grid[i][j] = 1;
        i--; j--;
    }
    
    dfs(bx, by);
    
    if (grid[cx][cy] == 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
