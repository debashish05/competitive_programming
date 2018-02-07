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
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        loop(n){cin>>a[i];}
        sort(a,a+n);
        //loop(n)cout<<a[i]<<" ";
        //cout<<"\n";
        bool s=true;
        for(i=n-1;i>=0;--i){
            if(a[i]!=1 && (ll)sqrt(a[i])==(double)sqrt(a[i])){
                s=false;
                cout<<n-i<<" ";
            }
        }
        if(s)cout<<"No supporter found.";
        cout<<"\n";
    }
    return 0;
}
