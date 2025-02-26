#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,k;
      cin>>n>>k;
      if(n==1)
      {
          cout<<1<<endl;
          cout<<1<<endl;
      }
      else if(n!=k && k%2==0)
      {
         cout<<3<<endl;
         cout<<1<<" "<<k<<" "<<k+1<<endl;
      }
      else if(n!=k && k%2==1)
      {
          if(k-1>1 && k+1<n)
          {
              cout<<3<<endl;
              cout<<1<<" "<<k-1<<" "<<k+2<<endl;
          }
          else
          {
              cout<<-1<<endl;
          }
      }
      else
      {
          cout<<-1<<endl;
      }
    }
    return 0;
}
