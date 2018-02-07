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
        int a[m];
        loop(m)cin>>a[i];
        ll count=0;
        count=a[0]-1;
        loop2(0,m-1){
            //cout<<count<<"\n";
            if(a[j+1]>a[j])count+=(a[j+1]-a[j]);
            else if(a[j+1]==a[j]);
            else count+=(n-a[j]+a[j+1]);
        }
        cout<<count;
        cout<<"\n";
    }
    return 0;
}