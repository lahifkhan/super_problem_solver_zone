#include <bits/stdc++.h>
using namespace std;


#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define endl "\n" 



int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        
        int n;
    cin>>n;
    string s;
    cin>>s;
 
    int till=n, ans=0;
 
    for(int i=0;i<n-1;i++){
     if(s[i] == '*' and s[i] == s[i+1]){
         till = i;
         break;
     }
    }
 
    for(int i=0;i<=till;i++){
     if(s[i] == '@')ans++;
    }
    cout<<ans<<endl;
    }

    return 0;
}
