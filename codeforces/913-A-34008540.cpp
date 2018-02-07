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
        ll n,m;
        cin>>n>>m;
        // m mod 2^n
        ll r=1;
        loop(n){
            r*=(2);
            if(r>100000000)break;
        }
        if(r>100000000)cout<<m;
        else cout<<m%r;
        cout<<"\n";
    }
    return 0;
}