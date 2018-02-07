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
        int m,n;
        cin>>m>>n;
        int a[n];
        loop(n)cin>>a[i];
        sort(a,a+n);
        int diff=a[n-1]-a[0];
        for(i=0;i<=(n-m);++i){
            if(diff>a[i+m-1]-a[i])diff=a[i+m-1]-a[i];
        }
        cout<<diff;
        cout<<"\n";
    }
    return 0;
}