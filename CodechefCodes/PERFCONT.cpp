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
        ll n,p,easy=0,hard=0;
        cin>>n>>p;
        ll a[n];int k=0;
        loop(n)cin>>a[i];
        loop(n){
            if(p/2<=a[i])easy++;
            if(p/10>=a[i])hard++;
        }
        if(easy==1 && hard==2)cout<<"yes";
        else cout<<"no";
        cout<<"\n";
    }
    return 0;
}
