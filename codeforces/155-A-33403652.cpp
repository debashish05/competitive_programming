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
    cin>>t;
    ll a[t];
    loop(t)cin>>a[i];
    int min=a[0],max=a[0],count=0;
    loop2(1,t){
        if(a[j]>max){count++;max=a[j];}
        else if(a[j]<min){count++;min=a[j];}
    }
    cout<<count;
    cout<<"\n";
    return 0;
}