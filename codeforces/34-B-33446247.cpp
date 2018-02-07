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
        int a[n];
        loop(n)cin>>a[i];
        sort(a,a+n);
        int sum=0;
        loop(m){
            if(a[i]>=0)break;
            sum+=a[i];
        }
        sum*=(-1);
        cout<<sum;
        cout<<"\n";
    }
    return 0;
}