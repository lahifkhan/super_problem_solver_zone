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
        map<int,int>mp;
        int ans=0;
        int ar[n+3];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            int x = ar[i]%10;
            mp[x]++;
        }
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                for(int k=0;k<10;k++)
                {
                    int a=-1,b=-1,c=-1;
                    if(mp[i]!=0)
                    {
                        a=1;
                        mp[i]--;
                    }
                    if(mp[j]!=0)
                    {
                        b=1;
                        mp[j]--;
                    }
                    if(mp[k]!=0)
                    {
                        c=1;
                        mp[k]--;
                    }
 
                    if(a==1&&b==1&&c==1)
                    {
                        int sum=i+j+k;
                        if(sum%10==3)
                        {
                            ans=1;
                            break;
                        }
                    }
                    if(a==1)mp[i]++;
                    if(b==1)mp[j]++;
                    if(c==1)mp[k]++;
                }
            }
        }
        if(ans==1){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
