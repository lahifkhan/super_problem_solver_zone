#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,k;
       cin>>n>>k;
       ll l=k,r=n+k-1;
       ll presum=(l-1)*l/2;
       ll totalsum=r*(r+1)/2;
      ll midsum=totalsum-presum;
     ll half=midsum/2,num,sum;
       while(l<=r)
       {
           ll mid=(l+r)/2;
           ll cursum=mid*(mid+1)/2;
           ll nowhave=cursum-presum;
           if(nowhave<=half)
           {
               num=mid;
               sum=nowhave;
               l=mid+1;
           }
           else
           {
               r=mid-1;
           }
       }
    ll ans1=midsum-sum;
      ll tmp=ans1;
       ans1=abs(ans1-sum);
       num++;
       ll ans2=abs(sum+num-tmp+num);
       cout<<min(ans1,ans2)<<endl;

    }
    return 0;
}