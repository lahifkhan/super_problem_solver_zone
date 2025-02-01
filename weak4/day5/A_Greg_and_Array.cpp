#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
#define endl "\n"

int main() {
    fastio();
    
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<ll> a(n + 1, 0); 
    vector<ll> diff(n + 2, 0);  
    vector<tuple<int, int, int>> ops(m + 1);  
    map<int, int> op_count;  


    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

 
    for (int i = 1; i <= m; i++) {
        int l, r, d;
        cin >> l >> r >> d;
        ops[i] = {l, r, d};  
    }

    
    while (k--) {
        int l, r;
        cin >> l >> r;
        op_count[l]++;  
        op_count[r + 1]--;  
    }

   
    ll ac_ops = 0;
    vector<ll> op_apply(m + 2, 0); 
    for (int i = 1; i <= m; i++) {
        ac_ops += op_count[i]; 
        op_apply[i] = ac_ops; 
    }


    for (int i = 1; i <= m; i++) {
        auto [l, r, d] = ops[i];  
        ll times = op_apply[i];  

        diff[l] += d * times;  
        diff[r + 1] -= d * times;  
    }

    
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += diff[i];  
        a[i] += sum;  
    }

  
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
