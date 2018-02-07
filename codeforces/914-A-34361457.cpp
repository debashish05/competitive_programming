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
    ll temp=(ll)sqrt(m);
    if(temp*temp==m)return false;
    return true;
}
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        loop(n)cin>>a[i];
        ll m=-mod;
        loop(n){
            if(a[i]>m){
                if(a[i]<0)m=a[i];
                else if(check(a[i]))m=a[i];
            }
        }
        cout<<m;
        cout<<"\n";
    }
    return 0;
}