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
        ll a[n];
        loop(n)cin>>a[i];
        int x=0,y=0,z=0;
        ll sum=0;
        loop(n){
            if(a[i]%4==1)x++;
            else if(a[i]%4==2)y++;
            else if(a[i]%4==3)z++;
            sum+=a[i];
        }
        if(sum%4!=0){cout<<"-1\n";continue;}
        ll count=0;
        count=y/2;
        y%=2;
        int m=min(z,x);
        count+=m;
        z-=m;x-=m;
        if(z==0){
            count+=(x/4)*3;
            x%=4;
            if(y==0 && x==0)cout<<count;
            else if(x==2 && y==1)cout<<count+2;
        }
        else{
            count+=(z/4)*3;
            z%=4;
            if(y==0 && z==0)cout<<count;
            else if(z==2 && y==1)cout<<count+2;
        }
        cout<<"\n";
    }
    return 0;
}
