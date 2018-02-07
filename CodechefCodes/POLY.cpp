#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1,i=0,j=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n][4];
        loop(n)loop2(0,4)cin>>a[i][j];
        int q;cin>>q;
        while(q--){
            ll x;cin>>x;
            ll ans=a[0][0]+a[0][1]*x+a[0][2]*x*x+a[0][3]*x*x*x;
            loop(n){
                ans=min(ans,a[i][0]+a[i][1]*x+a[i][2]*x*x+a[i][3]*x*x*x);
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
