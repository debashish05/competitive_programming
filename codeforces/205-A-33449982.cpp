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
        ll n;
        cin>>n;
        ll a[n];
        loop(n)cin>>a[i];
        ll s=mod;
        loop(n){
            if(a[i]<s)s=a[i];
        }
        int count=0,index=-1;
        loop(n){
            if(a[i]==s){count++;index=i;}
            if(count>1)break;
        }
        if(count==1)cout<<index+1;
        else cout<<"Still Rozdil";
        cout<<"\n";
    }
    return 0;
}