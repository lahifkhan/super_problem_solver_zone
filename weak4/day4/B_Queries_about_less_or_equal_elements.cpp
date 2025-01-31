#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define ll long long

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int n,m;
    cin>> n>> m;
    pbds<ll>pb;
    map<ll,ll> mp;
    for(int i=0; i<n; i++){
        ll x;
        cin>> x;
        pb.insert(x);
        mp[x]++;

    }
    for(int i=0; i<m; i++){
        ll x;
        cin>> x;
        ll v= pb.order_of_key(x);
        cout << v+mp[x] << endl;
        
    }


   return 0;
}