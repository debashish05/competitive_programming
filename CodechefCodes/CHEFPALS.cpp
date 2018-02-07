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
// Read the question properly
// don't do silly mistakes always
// check every conditions
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    srand(time(NULL));
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        loop(n)cin>>a[i];
        loop(n)cin>>b[i];
        loop(n){
            loop2(0,b[i])cout<<"b";
            loop2(b[i],a[i])cout<<"w";
            cout<<"\n";
        }
        ll c[n];
        loop(n)c[i]=i+1;
        random_shuffle(c,c+4);
        loop(n)cout<<c[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
