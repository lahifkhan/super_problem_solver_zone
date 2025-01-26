#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define endl "\n" // Define for newline


int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        int x =0;
 
        for(int i =0; i<n; i++){
            cin>>a[i];
             x^=a[i];
        }
 
        if(x==0){
            cout<<"YES"<<endl;
        }
        else {
 
            int k =0;
            int count =0;
            for(int i =0; i<n; i++){
            k^=a[i];
            if(k==x){
                k=0;
                count++;
            }
            }
 
            if(count>=2){
                cout<<"YES"<<endl;
            }
 
            else cout<<"NO"<<endl;
 
        }
    }

    return 0;
}
