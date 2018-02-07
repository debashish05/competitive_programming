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
    int n;
    cin>>n;
    int a[n];
    loop(n)cin>>a[i];
    int max=0,min=n-1;
    loop(n){
        if(a[i]>a[max])max=i;
    }
    for(j=max;j>0;--j)
        swap(a[j],a[j-1]);
    int count=max;
    //cout<<count<<"\n";
    for(i=n-1;i>0;--i){
        if(a[i]<a[min])min=i;
    }
    //loop(n)cout<<a[i]<<" ";
    //cout<<"\n";
    count+=(n-1-min);
    cout<<count;
    cout<<"\n";
    return 0;
}