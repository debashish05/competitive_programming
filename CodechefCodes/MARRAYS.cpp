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
        ll n,m;
        cin>>n;
        if(n==2){
            cin>>m;
            ll a[m];
            loop(m)cin>>a[i];
            ll max1=a[0],min1=a[0];
            loop(m){
                if(max1<a[i])max1=a[i];
                if(min1>a[i])min1=a[i];
            }
            cin>>m;
            ll b[m];
            loop(m)cin>>b[i];
            ll max2=b[0],min2=b[0];
            loop(m){
                if(max2<b[i])max2=b[i];
                if(min2>b[i])min2=b[i];
            }
            ll r1=abs(max1-min2);
            ll r2=abs(min1-max2);
            if(r1>=r2)cout<<r1;
            else cout<<r2;
        }
        else cout<<"10000";
        cout<<"\n";
    }
    return 0;
}
