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
        for(i=0;(4*i+7*j)<=n;++i){
            for(j=0;(4*i+7*j)<=n;++j){
                //cout<<4*i+7*j<<"\n";
                if(4*i+7*j==n)break;
            }
            if(4*i+7*j==n)break;
            j=0;
        }
        //cout<<4*i+7*j;
        if(4*i+7*j==n){
            for(k=0;k<i;++k)cout<<"4";
            for(k=0;k<j;++k)cout<<"7";
        }
        else cout<<"-1";
        cout<<"\n";
    }
    return 0;
}