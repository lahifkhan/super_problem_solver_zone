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

    int t=1;
    
    while (t--) {
        
        string s,t;
        cin>> s>> t;
        if(s.size() !=t.size()){
            cout<< "No" <<endl; 
            continue;
        }
        int n=s.size();
        bool find=true;
        for(int i=0; i<n; i++){
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                if(t[i]=='a'|| t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u'){

                }
                else{
                   find=false;
                   break;
                }
            }
            else{
                if(t[i]=='a'|| t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u'){
                    find=false;
                    break;

                }
            }
        }
        if(find){
            cout <<"Yes" << endl;
        }
        else{
            cout <<"No" << endl;
        }
    }

    return 0;
}
