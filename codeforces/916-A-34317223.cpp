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
bool lucky(ll h1,ll m1){
    while(h1!=0){
        ll c=h1%10;
        if(c==7)return true;
        h1/=10;
    }
    while(m1!=0){
        ll c=m1%10;
        if(c==7)return true;
        m1/=10;
    }
    return false;
}
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1,i=0,j=0,k=0;
    //cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll h,m;
        cin>>h>>m;
        for(i=0;n*i<24*60;++i){
            ll temp=h*60+m-n*i;
            if(temp<0)temp+=(24*60);
            ll h1=temp/60,m1=temp%60;
            if(lucky(h1,m1)){cout<<i;break;}
        }
        cout<<"\n";
    }
    return 0;
}