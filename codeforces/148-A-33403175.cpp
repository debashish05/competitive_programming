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
    ll n,m,l,d;
    cin>>k>>l>>m>>n>>d;
    bool a[d+1];
    loop(d+1)a[i]=false;    //no dragon get hit
    for(i=k;i<=d;i+=k)a[i]=true;
    for(i=l;i<=d;i+=l)a[i]=true;
    for(i=m;i<=d;i+=m)a[i]=true;
    for(i=n;i<=d;i+=n)a[i]=true;
    int count=0;
    loop(d+1){
        if(a[i])count++;
    }
    cout<<count;
    cout<<"\n";
    return 0;
}