#include<bits/stdc++.h>
#define ll unsigned long long int
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
        ll n,k,s;
        cin>>n>>k;
        if(k==1)cout<<n;
        else{
            ll n1=n;
            ll count=0;
            while(n1){
                n1/=2;
                count++;
            }
            ll ans=0,cal=1;
            loop(count){
                ans+=cal;
                cal*=2;
            }
            cout<<ans;
        }
        cout<<"\n";
    }
    return 0;
}