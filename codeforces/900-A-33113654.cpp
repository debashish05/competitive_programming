#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0;
    //cin>>t;
    while(t--){
      int n;
      cin>>n;
      ll x[n],y[n];
      loop(n)cin>>x[i]>>y[i];
      int pos=0,neg=0;
      loop(n){
        if(x[i]>0)pos++;
        else if(x[i]<0)neg++;
      }
      if(neg<=1 || pos<=1)cout<<"Yes";
      else cout<<"No";
      cout<<"\n";  
    }
    return 0;
}