#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000000
using namespace std;
ll di(ll n)
{
  ll temp1=0,temp2=0,temp;
  while(n!=0)
  { 
    temp=(n%10);
    if(temp%2==0)temp2+=temp;
    else temp1+=temp;
    n/=10;
  }
  return (abs(temp1-temp2));
}
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0;
    cin>>t;
    ll dp[10000001]={0};
    dp[1]=2;dp[2]=12;
    for(i=3;i<=1000000;++i)
      dp[i]=2*dp[i-1]-dp[i-2]-2*di(i)+di(2*i-2)+2*di(2*i-1)+di(2*i);
    while(t--){
      ll n;
      cin>>n;
      cout<<dp[n]<<"\n";
    }
    return 0;
}
