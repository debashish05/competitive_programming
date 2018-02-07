#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll k=1,i=1,j=1,t=1;
    int n,m;
    cin>>n>>m;
    for(i=n+1;i<m;++i){
        for(j=2;j<=(int)sqrt(i);++j){
            if(i%j==0)break;
        }
        if(j>(int)sqrt(i)){k=0;break;}
    }
    if(i==m){
        for(j=2;j<=(int)sqrt(m);++j){
            if(m%j==0){k=0;break;}
        }
    }
    if(k)cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
    return 0;
}