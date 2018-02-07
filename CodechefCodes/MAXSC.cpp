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
        ll n;
        cin>>n;
        ll a[n][n];
        loop(n){
            loop2(0,n)cin>>a[i][j];
        }
        ll b[n],max=mod,sum=0;
        for(i=n-1;i>=0;--i){
            loop2(0,n)b[j]=a[i][j];
            sort(b,b+n);
            for(j=n-1;j>=0;--j){
                if(max>b[j]){
                    sum+=b[j];
                    max=b[j];
                    break;
                }
            }
            if(j==-1){sum=-1;break;}
        }
        cout<<sum;
        cout<<"\n";
    }
    return 0;
}
