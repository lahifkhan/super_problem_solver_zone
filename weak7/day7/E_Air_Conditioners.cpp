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
        
        
	int n, k;
	cin >> n >> k;
 
	vector<int> a(k);
	vector<ll> t(k);
 
	for(int i = 0; i < k; i++){
        cin >> a[i];
    } 
	for(int i = 0; i < k; i++){
        cin >> t[i];
    }
 
	ll temp[n];
	for(int i = 0; i < n; i++){
        temp[i] = INT_MAX;

    } 
	for(int i = 0; i < k; i++){
        temp[a[i] - 1] = t[i];
    } 
 
	vector<ll> pref(n);
	vector<ll> suff(n);
 
	ll prev = INT_MAX;
	for(int i = 0; i < n; i++) {
		pref[i] = min(prev + 1, temp[i]);
		prev = pref[i];
	}
 
	prev = INT_MAX;
	for(int i = n - 1; i >= 0; i--) {
		suff[i] = min(prev + 1, temp[i]);
		prev = suff[i];
	}
 
	for(int i = 0; i < n; i++) {
		cout << min(pref[i], suff[i]) << " ";
	}
 
	cout << endl;	
    }

    return 0;
}
