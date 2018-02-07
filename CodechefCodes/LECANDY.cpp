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
    int t=1,i,j;
    cin>>t;
    while(t--)
    {
        int n;
        ll c,sum=0;
        cin>>n>>c;
        ll a[n];
        loop(n)cin>>a[i];
        loop(n)sum+=a[i];
        if(sum<=c)cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }
    return 0;
}
