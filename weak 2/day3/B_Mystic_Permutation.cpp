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
        // Input
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        if(n==1){
            cout <<-1 <<endl;
            continue;
        }

          priority_queue<int,vector<int>, greater<int>> pq;
          for(int i=0; i<n; i++){
            pq.push(arr[i]);
          }
          int j=0;
          while(!pq.empty()){
            int x= pq.top();
            pq.pop();
            if(x==arr[j] && j!=n-1){
                int y= pq.top();
                pq.pop();
                arr[j]=y;
                j++;
                pq.push(x);


            }
           else if(x==arr[j]&& j==n-1){
             arr[j]=arr[j-1];
             arr[j-1]=x;
             j++;
           }
           else{
             arr[j]=x;
             j++;
           }
          }
          for(auto v : arr){
            cout << v <<" ";
          }
          
          cout << endl;

        
    }

    return 0;
}
