#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 

 
int main() {
	int t ;
	cin >> t;
	while(t--) {
		ll n;
	cin >> n;
 
	vector<ll> arr(n);
	for(ll i = 0; i < n; i++) cin >> arr[i];

    bool f=true;
 
	for(ll i = 0; i < n - 1; i++) {
		if(arr[i + 1] < arr[i]) {
			if(((i + 1) & i) != 0) {
				f=false;
			}
		}
	}
 
	if(f){
        cout <<"YES" << "\n";

    }
    else{
        cout <<"NO" << "\n";
    }
 
	}
	return 0;
}