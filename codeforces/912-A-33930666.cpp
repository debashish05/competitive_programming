#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll x,y,z;
        cin>>x>>y>>z;
        ll a1=a-(x*2+y);
        ll b1=b-(z*3+y);
        if(a1>=0)a1=0;
        if(b1>=0)b1=0;
        cout<<abs(a1)+abs(b1);
        cout<<"\n";
    }
    return 0;
}