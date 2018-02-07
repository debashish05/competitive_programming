#include<bits/stdc++.h>
#define ll long long int
#define lld long double
#define ull unsigned long long int  
#define loop(k1) for(i=0;i<k1;++i)
#define loop2(k2,l) for(j=k2;j<l;++j)
#define mod 1000000007
#define pb push_back
#define mp make_pair
using namespace std;
// Read the question properly
// don't do silly mistakes always
// check every conditions
bool check(ll m){
    for(int i=2;i<=sqrt(m);++i){
        if(m%i==0)return false;
    }
    return true;
}
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        ll n,a,sq;
        cin>>n;
        loop(n){
            cin>>a;
            sq=sqrt(a);
            if(a!=1 && sq*sq==a && check(sq))cout<<"YES\n";
            else cout<<"NO\n";
        }
        //cout<<"\n";
    }
    return 0;
}