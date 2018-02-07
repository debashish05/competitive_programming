#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll n=1,i=0,j=0,k=0,a,b;
    cin>>n;
    loop(n){
        cin>>a;
        bool s=true;
        for(j=0;j<=100;++j)
            for(k=0;k<=100;++k)
                if(3*j+7*k==a){s=false;break;}
        for(j=0;j<=100;++j)
            for(k=0;k<=100;++k)
                if(3*k+7*j==a){s=false;break;}
        if(s)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}