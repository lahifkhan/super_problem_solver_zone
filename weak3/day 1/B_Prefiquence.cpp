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
       ll n,m;
   cin>>n>>m;
   string s,t;
   cin>>s>>t;
   ll i=0,j=0;
   ll len = 0 ;
   while(i<n && j<m){
      if(s[i] == t[j]){
        len++;
        i++;
        j++;
      }
 
      while(s[i] !=t[j] && j<m){
        j++;
      }
   }
 
   cout<<len<<endl;
    }

    return 0;
}
