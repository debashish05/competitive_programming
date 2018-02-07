#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=0;j<k;++j)
#define mod 1000000007
using namespace std;
ll power(int n){
    ll result=1,x=2;
    while(n>0)
    {
        if(n%2==1)result=(x*result)%mod;
        x=((x*x)%mod);
        n/=2;
    }
    return result;
}
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i,j;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        loop(n)cin>>a[i];
        sort(a,a+n);
        if(n==1){cout<<"1\n";continue;}
        ll count=1;
        for(i=n-1;i>0;i--){
            if(a[i]==a[i-1])count++;
            else break;
        }
        count=power(count)-1;       //2^n-1
        cout<<count;
        cout<<"\n";
    }
    return 0;
}
