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
 
	vector<int>  arr(n+1);
	for(int i=1; i<=n; i++){
        cin>>arr[i];

    }
		
 
	int maxi = arr[n]-arr[1];
	
	for(int i=1; i<=n-1; i++){
		maxi = max(maxi, arr[n]-arr[i]);
	}
 
	
	for(int i=2; i<=n; i++){
		maxi = max(maxi, arr[i] - arr[1]);
	}
 
	
	for(int i=1; i<=n-1; i++){
        maxi = max(maxi, arr[i] - arr[i+1]);
 

    }
		
	cout<<maxi<<endl;
    }

    return 0;
}
