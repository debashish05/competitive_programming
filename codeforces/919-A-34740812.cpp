#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define ull unsigned long long int  
#define loop(k1) for(i=0;i<k1;++i)
#define loop2(k2,l) for(j=k2;j<l;++j)
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<int>;
#define vl vector<ll>;
#define inf numeric_limits<ll>::max();
// Read the question properly
// don't do silly mistakes always
// check every conditions
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        double a,b,mi=numeric_limits<double>::max();
        loop(n){
        	cin>>a>>b;
        	mi=min(mi,(a*m)/b);
        }
        cout<<fixed<<setprecision(8)<<mi;
        cout<<"\n";
    }
    return 0;
}