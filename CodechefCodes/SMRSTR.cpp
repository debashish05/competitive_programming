#include<bits/stdc++.h>
#define ll long long int
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
      int n,q;
      cin>>n>>q;
      ll d[n];
      loop(n)cin>>d[i];
      ll pro=1;
      loop(n){
        if(pro>mod)break;
        pro*=d[i];
      }
      while(q--)
      {
        ll x;
        cin>>x;
        if(pro>mod){cout<<"0 ";continue;}
        cout<<x/pro<<" ";
      }
      cout<<"\n";
    }
    return 0;
}
