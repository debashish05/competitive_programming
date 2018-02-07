#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n=1,q,i=0,j=0;
    cin>>n;
    if(n%10==0)cout<<n;
    else if(n%10>5){
      n+=(10-n%10);
      cout<<n;
    }
    else{
      n-=(n%10);
      cout<<n;
    }
    return 0;
}