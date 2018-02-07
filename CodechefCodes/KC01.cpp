#include<bits/stdc++.h>
#define ll long double
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000000
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0;
    cin>>t;
    while(t--){
      ll a,b,pro=1;
      cin>>a>>b;
      for(i=b+1,j=1;i<=a;++i,++j)
        pro*=(i/j);
      cout<<fixed<<setprecision(0)<<pro;
      cout<<"\n";
    }
    return 0;
}
