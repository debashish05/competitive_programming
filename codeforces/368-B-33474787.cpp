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
        ll a[n];
        loop(n)cin>>a[i];
        ll b[100001]={0};
        loop(n){
            b[a[i]]++;            
        }
        int count=0; //total number of distinct integer
        loop(100001){
            if(b[i])count++;
        }
        ll c[n+1]={0};
        c[1]=count;
        loop2(2,n+1){
            b[a[j-2]]--;
            if(b[a[j-2]]<=0 && count)count--;
            c[j]=count;
        }
        loop(m){
            int index;
            cin>>index;
            cout<<c[index]<<"\n";
        }
        //cout<<"\n";
    }
    return 0;
}