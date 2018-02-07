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
        int n;
        cin>>n;
        loop(n+1){
            loop2(0,n-i)cout<<"  ";
            int t=0;
            for(;j<=n;++j){cout<<t++;if(j!=n)cout<<" ";}--t;
            while(t--!=-1)if(t!=-1)cout<<" "<<t;
            cout<<"\n";
        }
        loop(n){
            loop2(0,i+1)cout<<"  ";
            int t=0;
            for(;j<=n;++j){cout<<t++;if(j!=n)cout<<" ";}t-=2;
            while(t>=0){cout<<" "<<t;--t;}
            cout<<"\n";
        }
    }
    return 0;
}