#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=0;j<k;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    ll t=1,i=0,j=0;
    cin>>t;
    ll a[t];
    loop(t)cin>>a[i];
    sort(a,a+t);
    loop(t)cout<<a[i]<<"\n";
    return 0;
}
