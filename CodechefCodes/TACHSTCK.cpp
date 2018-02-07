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
    int n=1,i=0,j=0;
    ll d;
    cin>>n>>d;
    ll a[n];
    loop(n)cin>>a[i];
    sort(a,a+n);
    //loop(n)cout<<a[i]<<" ";
    int count=0;
    loop(n-1){
    	if((a[i+1]-a[i])<=d){count++;++i;}
    }
    cout<<count<<"\n";
    return 0;
}
