#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n][n];
    memset(ar, 0, sizeof(ar));
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int a = i, b = i, y = x;
        while (x--) {
            ar[a][b] = y;
            if (b != 0 && ar[a][b - 1] == 0) b--;
            else a++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) cout << ar[i][j] << " ";
        cout << "\n";
    }
    
    return 0;
}
