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
        int n,m;
        cin>>n>>m;
        int a[n],b[n];
        loop(n)cin>>a[i]>>b[i];
        int min=a[0],max=b[0];
        loop(n){
            if(a[i]<=min && b[i]>=min)min=a[i];
            if(b[i]>=max && a[i]<=max)max=b[i];
        }
        if(min==0 && max>=m)cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}